#include "mcc_generated_files/mcc.h"
#include "sintetizzatore.h"

/**
 * funzione per il controllo che il DSP sia pronto per essere 
 * inizializzato: controllo pin <b>READY</b>.
 */
void check_sintetizzatore_ready() {
    //loop fino a che READY non va alto
    while(!READY_GetValue());
}

void wait_message() {
    while(BUSY_GetValue());
}

//=================================================================//
//send I2C data 16 bits
//
void I2Cdata(unsigned int cmd)
{    
	unsigned int mask = 0;
			
	for(mask = 0x8000; mask > 0; mask >>= 1)
	{
		SCL_Low();	
        if(cmd & mask) {
            SDA_High();
        } else{ 
            SDA_Low();
        }				
		SCL_High();                
	}
	SCL_Low();	
}

void volume_up() {
    SCL_High();		//start condition
	SDA_High();		//
	SDA_Low();			//
    
    __delay_us(20);	//wait sleep to wake up state
	I2Cdata(0x4800);	//power up chip with ramp-up or without ramp-up
	__delay_ms(2);		//wait state exist wake up state
}

//=================================================================//
//power up chip
//
void SoundChip_Active(unsigned int cmd)
{
	SCL_High();		//start condition
	SDA_High();		//
	SDA_Low();			//
	//--------------//

	__delay_us(20);	//wait sleep to wake up state
	I2Cdata(cmd);	//power up chip with ramp-up or without ramp-up
	__delay_ms(2);		//wait state exist wake up state

	//--------------//stop condition
	SDA_Low();			//
	SCL_High();       //
	SDA_High();			//
	
	while(BUSY_GetValue());	//wait end of ramp
}

//=================================================================//
//power down chip and into sleep state
//
void SoundChip_DeActive(unsigned int cmd)
{
	while(BUSY_GetValue());	//wait the end of last voice group

	SCL_High();
    //start condition
	SDA_High();			//
	SDA_Low();			//
	//--------------//

	I2Cdata(cmd);	//power down chip with ramp-down or without ramp-down

	//--------------//stop condition
	SDA_Low();			//
	SDA_High();       //
	SDA_High();			//

	while(BUSY_GetValue());	//wait end of ramp
}

//=================================================================//
//Play to assign Voice Group 
//
void SoundChip_Play(unsigned int addr)
{
	unsigned int cmd = 0;
 
	cmd = 0x9800 | addr;

	SCL_High();		//start condition
	SDA_High();			//
	SDA_Low();			//
	//--------------//

	I2Cdata(cmd);
	
	//--------------//stop condition
	SDA_Low();			//
	SCL_High();       //
	SDA_High();			//

	__delay_us(20); 	//for max output delay of BUSY/FULL signal
}

//=================================================================//
//Play to assign Voice Group 
//
void SoundChip_Load(unsigned int addr)
{
	unsigned int cmd = 0;
 
	cmd = 0x9400 + addr;

	SCL_High();		//start condition
	SDA_High();			//
	SDA_Low();			//
	//--------------//

	I2Cdata(cmd);
	
	//--------------//stop condition
	SDA_Low();			//
	SCL_High();       //
	SDA_High();			//

	__delay_us(20); 	//for max output delay of BUSY/FULL signal
}
