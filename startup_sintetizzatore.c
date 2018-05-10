#include "startup_sintetizzatore.h"
#include "mcc_generated_files/mcc.h"
#include "indirizzi_messaggi.h"
#include "sintetizzatore.h"

/**
 * funzione per inizializzare il sintetizzatore.
 */
void initialize_sintetizzatore() {
    RESINT_SetHigh();
    RESINT_SetLow();

    check_sintetizzatore_ready();
    //Attivazione chip
    SoundChip_Active(ATTIVAZIONE_CHIP);
    //Riproduzione messaggio pronto all'uso
    SoundChip_Play(SISTEMA_PRONTO);
    //delay di assestamento trasmissione
    __delay_us(100);
    wait_message();
}
