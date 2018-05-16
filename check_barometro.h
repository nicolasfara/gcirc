/* 
 * File:   check_barometro.h
 * Author: nicolas
 *
 * Created on April 14, 2018, 4:33 PM
 */

#ifndef CHECK_BAROMETRO_H
#define	CHECK_BAROMETRO_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define DEPTH_1 5  //metri
#define DEPTH_2 10
#define DEPTH_3 15
#define DEPTH_4 20
#define DEPTH_5 30
#define DELTA   1


void check_barometro();
void incrementWarning();
char countTime();
char checkWarning();


#ifdef	__cplusplus
}
#endif

#endif	/* CHECK_BAROMETRO_H */

