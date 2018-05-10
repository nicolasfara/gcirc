/* 
 * File:   rxtx_mode.h
 * Author: nicolas
 *
 * Created on April 14, 2018, 4:30 PM
 */

#ifndef RXTX_MODE_H
#define	RXTX_MODE_H
#include <stdbool.h>

#ifdef	__cplusplus
extern "C" {
#endif

void set_tx_mode();
void set_rx_mode();
bool is_tx_mode();

#ifdef	__cplusplus
}
#endif

#endif	/* RXTX_MODE_H */

