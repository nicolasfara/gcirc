#include "check_barometro.h"
#include "barometro.h"
#include "sintetizzatore.h"
#include "indirizzi_messaggi.h"
#include "rxtx_mode.h"

char flag5 = 0;
char flag10 = 0;
char flag15 = 0;
char flag20 = 0;
char alarmCount = 0;
uint24_t time = 0;
float metri;

void play(unsigned int code) {
    SoundChip_Play(code);
    wait_message();
}

void check_barometro() {
    if(check_work()) {
        return;
    }
    metri = read_meters();
    //sono in tx mode e rilevo una profondita pericolosa
    if(is_tx_mode() && metri >= 30) {
        set_rx_mode();
        SoundChip_Play(PROF_30M);
        wait_message();
        set_tx_mode();
    } else {
        //sono in rx e comunico al sintetizzatore le profondita' con margine di 2 metri
        //Le flag servono a non ripetere continuamente l'altezza ma solo quando si cambia soglia
        if(metri < DEPTH_1 - DELTA) {
            //flag5 = 0;
            flag10 = 0;
            flag15 = 0;
            flag20 = 0;
            alarmCount = 0;
        }
        if(metri >= DEPTH_1 - DELTA && metri <= DEPTH_1 + DELTA && !flag5) {
            play(PROF_5M);
            flag5 = 1;
            flag10 = 0;
            flag15 = 0;
            flag20 = 0;
            alarmCount = 0;
        } else if(metri >= DEPTH_2 - DELTA && metri <= DEPTH_2 + DELTA && !flag10) {
            play(PROF_10M);
            flag5 = 0;
            flag10 = 1;
            flag15 = 0;
            flag20 = 0;
            alarmCount = 0;
        } else if(metri >= DEPTH_3 - DELTA && metri <= DEPTH_3 + DELTA && !flag15) {
            play(PROF_15M);
            flag5 = 0;
            flag10 = 0;
            flag15 = 1;
            flag20 = 0;
            alarmCount = 0;
        } else if(metri >= DEPTH_4 - DELTA && metri <= DEPTH_4 + DELTA && !flag20) {
            play(PROF_20M);
            flag5 = 0;
            flag10 = 0;
            flag15 = 0;
            flag20 = 1;
            alarmCount = 0;
        } else if(metri >= DEPTH_5 - DELTA) {
            if(alarmCount == 0) {
                play(PROF_30M);
                alarmCount++;
            }
            flag5 = 0;
            flag10 = 0;
            flag15 = 0;
            flag20 = 0;            
        }        
    }
}

char countTime() 
{
    if(alarmCount == 4) {
        return 1;
    }
    return 0;
}

void incrementWarning()
{
    alarmCount++;
}

char checkWarning()
{
    if(metri > 29.0) {
        return 1;
    }
    return 0;
}
