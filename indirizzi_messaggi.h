/* 
 * File:   indirizzi_messaggi.h
 * Author: nicolas
 *
 * Created on April 2, 2018, 7:12 PM
 */

#ifndef INDIRIZZI_MESSAGGI_H
#define	INDIRIZZI_MESSAGGI_H

#define to_sec(x) (6590 / 6 * x)

#define DEBOUNCE_TIME       16  //millisecondi
#define ALLARM_DELAY_PULS2  600 //millisecondi
#define DELAY_CHANNEL       100 //millisecondi
#define VOLUME_DELAY        100 //millisecondi
#define INV_SDNT_SDNR       5 //millisecondi
#define CHECK_BATT_BAR_TIME 30 //secondi

#define TX_NORMALE          0X0F
#define TX_ALLARME          0X0E
#define FINE_ALLARME        0X0B
#define RITORNO_RX          0X0D
#define STATO_CH1           0X07
#define STATO_CH2           0X08
#define STATO_CH3           0X09
#define STATO_CH4           0X0A
#define PROF_5M             0x04
#define PROF_10M            0x00
#define PROF_15M            0x01
#define PROF_20M            0x02
#define PROF_30M            0x03    //PERICOLO!!
#define BATT_SCARICA        0x06
#define SISTEMA_PRONTO      0X05
#define PROGRAMMAZIONE      0X0C

#define ATTIVAZIONE_CHIP    0XA800
#define DISATTIVAZIONE_CHIP 0xB800

#endif	/* INDIRIZZI_MESSAGGI_H */

