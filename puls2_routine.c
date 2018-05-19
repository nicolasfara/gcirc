#include "puls2_routine.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/mcc.h"
#include "indirizzi_messaggi.h"
#include "sintetizzatore.h"
#include "rxtx_mode.h"
#include "mcc_generated_files/tmr0.h"
#include "check_barometro.h"
#include "check_battery.h"
#include "test_battery_barometer.h"
#include "funzioni_tx_rx.h"

char tmr0_of = 0;
char tmr2_of = 0;

void tmr0_overflow()
{
    tmr0_of = 1;
}

void tmr2_overflow()
{
    tmr2_of = 1;
}

void rxtx_allarm()
{
    while(1) {
        /*SoundChip_Play(TX_ALLARME);
        wait_message();

        __delay_ms(5);
        set_tx_mode();
        __delay_ms(5);
        SoundChip_Play(TX_ALLARME);*/
        TMR1_StopTimer();
        
        tx_rx_alarm();

        TMR0_WriteTimer(0);
        TMR0_StartTimer();


        //Attendo che il timer vada in overflow dopo 2 minuti
        while (!tmr0_of) {
            //Se premo il pulsante esco
            if(!PULS2_GetValue()) {
                __delay_ms(DEBOUNCE_TIME);
                if(!PULS2_GetValue()) {
                    set_rx_mode();
                    TMR0_StopTimer();
                    __delay_ms(5);
                    SoundChip_Play(FINE_ALLARME);
                    wait_message();
                    TMR1_Reload();
                    TMR1_StartTimer();
                    return; //Esco dal ciclo
                }
            }        
        }
        tmr0_of = 0;
        TMR0_StopTimer();

        //Invert SDNR con SDNT
        set_rx_mode();
        __delay_ms(5);
        SoundChip_Play(RITORNO_RX);
        wait_message();
        
        TMR2_WriteTimer(0);
        TMR2_StartTimer();
        TMR1_Reload();
        TMR1_StartTimer();
        while (!tmr2_of) {
            check_barometro();
            if(!PULS2_GetValue()) {
                __delay_ms(DEBOUNCE_TIME);
                if(!PULS2_GetValue()) {
                    TMR2_StopTimer();
                    SoundChip_Play(FINE_ALLARME);
                    wait_message();
                    TMR1_Reload();
                    TMR1_StartTimer();
                    return;
                }
            }
        }
        tmr2_of = 0;
        TMR2_StopTimer();
        TMR1_StopTimer();
    }    
}

void cambio_canale()
{
    while(!PULS2_GetValue());
    while(1) {
        uint8_t channel = (IDCH0_GetValue() << 1 | IDCH1_GetValue());
        switch(channel)
        {
            case 0:
                SoundChip_Play(STATO_CH1);
                wait_message();
                break;
            case 1:
                SoundChip_Play(STATO_CH2);
                wait_message();
                break;
            case 2:
                SoundChip_Play(STATO_CH3);
                wait_message();
                break;
            case 3:
                SoundChip_Play(STATO_CH4);
                wait_message();
                break;
        }
        
        char flag = 0;
        while(!flag) {
            if(!PULS1_GetValue()) {
                __delay_ms(DEBOUNCE_TIME);
                if(!PULS1_GetValue()) {
                    CMBCAN_SetHigh();
                    __delay_ms(DELAY_CHANNEL);
                    CMBCAN_SetLow();
                    flag = 1; //esco da questo loop
                }
            }
            
            if(!PULS2_GetValue()) {
                __delay_ms(DEBOUNCE_TIME);
                if(!PULS2_GetValue()) {
                    return; //esco dalla funzione cambio canale
                }
            }
        }
    }
}

void volume()
{
    while(!PULS2_GetValue());
    RGVA_SetHigh();
    while(1) {
        if(!PULS1_GetValue()) {
            __delay_ms(DEBOUNCE_TIME);
            if(!PULS1_GetValue()) {
                REGVOL_SetHigh();
                __delay_ms(VOLUME_DELAY);
                REGVOL_SetLow();
                while(!PULS1_GetValue());
            }
        }
        
        if(!PULS2_GetValue()) {
            __delay_ms(DEBOUNCE_TIME);
            if(!PULS2_GetValue()) {
                while(!PULS2_GetValue());
                break;
            }
        }        
    }
    RGVA_SetLow();
}

void programmazione()
{
    SoundChip_Play(PROGRAMMAZIONE);
    wait_message();
    cambio_canale();
    volume();    
}

void poll_puls2()
{
    if(!PULS2_GetValue()) {
        __delay_ms(DEBOUNCE_TIME);
        if(!PULS2_GetValue()) {
            __delay_ms(ALLARM_DELAY_PULS2);
            if(!PULS2_GetValue()) {
                programmazione();
                while(!PULS2_GetValue());
            } else {
                rxtx_allarm();
                while(!PULS2_GetValue());
            }
        }
    }
    
}


