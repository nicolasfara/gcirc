#include "puls1_routine.h"
#include "mcc_generated_files/mcc.h"
#include "indirizzi_messaggi.h"
#include "sintetizzatore.h"
#include "barometro.h"
#include "rxtx_mode.h"
#include "check_barometro.h"
#include "check_battery.h"

void gestione_puls1() {
    SoundChip_Play(TX_NORMALE);
    wait_message();
    __delay_ms(INV_SDNT_SDNR);
    set_tx_mode(); //Invert SDNR con SDNT
    __delay_ms(INV_SDNT_SDNR);
    SoundChip_Play(TX_NORMALE);
    //wait_message(); non necessario testare il BUSY
}

void rilascio_puls1() {
    set_rx_mode();
    __delay_ms(INV_SDNT_SDNR);
    SoundChip_Play(RITORNO_RX);
    wait_message();
}

void poll_puls1()
{
    if(!PULS1_GetValue()) {
        __delay_ms(DEBOUNCE_TIME);
        if(!PULS1_GetValue()) {
            gestione_puls1();
        }
        
        while (!PULS1_GetValue())
        {
            //check_barometro();
            //check_battery();
        }
        
        rilascio_puls1();
    }
}