/* 
 * File:   puls2_routine.h
 * Author: nicolas
 *
 * Created on April 25, 2018, 7:48 AM
 */

#ifndef PULS2_ROUTINE_H
#define	PULS2_ROUTINE_H

#ifdef	__cplusplus
extern "C" {
#endif

void gestione_puls2();
void programmazione();
void poll_puls2();
void tmr0_overflow();
void tmr2_overflow();


#ifdef	__cplusplus
}
#endif

#endif	/* PULS2_ROUTINE_H */

