/* 
 * File:   sintetizzatore.h
 * Author: nicolas
 *
 * Created on April 14, 2018, 4:24 PM
 */

#ifndef SINTETIZZATORE_H
#define	SINTETIZZATORE_H

#include "mcc_generated_files/pin_manager.h"


#ifdef	__cplusplus
extern "C" {
#endif
    
#define SDA_High()      SDA_S_SetHigh()
#define SDA_Low()       SDA_S_SetLow()
#define SCL_High()      SCL_S_SetHigh()
#define SCL_Low()       SCL_S_SetLow()

void I2Cdata(unsigned int cmd);
void SoundChip_Active(unsigned int cmd);
void SoundChip_DeActive(unsigned int cmd);
void SoundChip_Play(unsigned int addr);
void SoundChip_Load(unsigned int addr);
void check_sintetizzatore_ready();
void wait_message();
void volume_up();

#ifdef	__cplusplus
}
#endif

#endif	/* SINTETIZZATORE_H */

