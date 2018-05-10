#include "mcc_generated_files/mcc.h"
#include "test_battery_barometer.h"
#include "check_barometro.h"
#include "check_battery.h"
#include "indirizzi_messaggi.h"

uint24_t timing = 0;

void test_battery_barometro(char time)
{
    if(++timing == to_sec(time)) {
        timing = 0;
        check_barometro();
        check_battery();        
    }    
}