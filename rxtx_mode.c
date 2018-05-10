#include "mcc_generated_files/mcc.h"
#include "rxtx_mode.h"

void set_rx_mode() {
    SDNT_SetHigh();
    SDNR_SetLow();
}

void set_tx_mode() {
    SDNT_SetLow();
    SDNR_SetHigh();
}

bool is_tx_mode() {
    if(!SDNT_GetValue() && SDNR_GetValue()) {
        return true;
    }
    return false;        
}
