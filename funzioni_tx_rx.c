#include "funzioni_tx_rx.h"
#include "mcc_generated_files/mcc.h"
#include "sintetizzatore.h"
#include "indirizzi_messaggi.h"
#include "rxtx_mode.h"

void tx_rx_alarm()
{
    SoundChip_Play(TX_ALLARME);
    wait_message();
    __delay_ms(5);
    set_tx_mode();
    SoundChip_Play(TX_ALLARME);    
}
