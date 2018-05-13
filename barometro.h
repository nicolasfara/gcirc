/* 
 * File:   barometro.h
 * Author: nicolas
 *
 * Created on April 14, 2018, 4:35 PM
 */

#ifndef BAROMETRO_H
#define	BAROMETRO_H
#include "mcc_generated_files/mcc.h"
#ifdef	__cplusplus
extern "C" {
#endif

#define ADDRESS                     0x76
#define READ                        0x01
#define WRITE                       0x00
#define SLAVE_I2C_GENERIC_RETRY_MAX 100
#define WATER_DENSITY               1030
#define ACC_GRAVITY                 9.81
#define SEA_PRESSURE                101325
    
float read_meters();
uint24_t read_pressure();
char check_work();


#ifdef	__cplusplus
}
#endif

#endif	/* BAROMETRO_H */

