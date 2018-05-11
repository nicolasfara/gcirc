#include "mcc_generated_files/mcc.h"
#include "check_battery.h"
#include "indirizzi_messaggi.h"
#include "sintetizzatore.h"
#include "rxtx_mode.h"

void check_battery() {
    if(!BLOW_GetValue()) {
        // Se sono in tx mode switcho momentaneamente in rx
        if(is_tx_mode()) {
            set_rx_mode();
            SoundChip_Play(BATT_SCARICA);
            wait_message();
            // Ripristino stato precedente
            set_tx_mode();
        } else {
            //Sono gia in rx e riproduco solo il messaggio
            SoundChip_Play(BATT_SCARICA);
            wait_message();
        }
    }
}
