/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F15356
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set BLOW aliases
#define BLOW_TRIS                 TRISAbits.TRISA0
#define BLOW_LAT                  LATAbits.LATA0
#define BLOW_PORT                 PORTAbits.RA0
#define BLOW_WPU                  WPUAbits.WPUA0
#define BLOW_OD                   ODCONAbits.ODCA0
#define BLOW_ANS                  ANSELAbits.ANSA0
#define BLOW_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define BLOW_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define BLOW_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define BLOW_GetValue()           PORTAbits.RA0
#define BLOW_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define BLOW_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define BLOW_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define BLOW_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define BLOW_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define BLOW_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define BLOW_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define BLOW_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set SDNT aliases
#define SDNT_TRIS                 TRISAbits.TRISA1
#define SDNT_LAT                  LATAbits.LATA1
#define SDNT_PORT                 PORTAbits.RA1
#define SDNT_WPU                  WPUAbits.WPUA1
#define SDNT_OD                   ODCONAbits.ODCA1
#define SDNT_ANS                  ANSELAbits.ANSA1
#define SDNT_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SDNT_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SDNT_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SDNT_GetValue()           PORTAbits.RA1
#define SDNT_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SDNT_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SDNT_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SDNT_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SDNT_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SDNT_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SDNT_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define SDNT_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RGVA aliases
#define RGVA_TRIS                 TRISAbits.TRISA2
#define RGVA_LAT                  LATAbits.LATA2
#define RGVA_PORT                 PORTAbits.RA2
#define RGVA_WPU                  WPUAbits.WPUA2
#define RGVA_OD                   ODCONAbits.ODCA2
#define RGVA_ANS                  ANSELAbits.ANSA2
#define RGVA_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RGVA_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RGVA_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RGVA_GetValue()           PORTAbits.RA2
#define RGVA_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RGVA_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RGVA_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RGVA_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RGVA_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RGVA_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RGVA_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RGVA_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SDNR aliases
#define SDNR_TRIS                 TRISAbits.TRISA3
#define SDNR_LAT                  LATAbits.LATA3
#define SDNR_PORT                 PORTAbits.RA3
#define SDNR_WPU                  WPUAbits.WPUA3
#define SDNR_OD                   ODCONAbits.ODCA3
#define SDNR_ANS                  ANSELAbits.ANSA3
#define SDNR_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SDNR_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SDNR_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SDNR_GetValue()           PORTAbits.RA3
#define SDNR_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SDNR_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SDNR_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SDNR_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SDNR_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SDNR_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SDNR_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define SDNR_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set SDA_S aliases
#define SDA_S_TRIS                 TRISAbits.TRISA4
#define SDA_S_LAT                  LATAbits.LATA4
#define SDA_S_PORT                 PORTAbits.RA4
#define SDA_S_WPU                  WPUAbits.WPUA4
#define SDA_S_OD                   ODCONAbits.ODCA4
#define SDA_S_ANS                  ANSELAbits.ANSA4
#define SDA_S_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SDA_S_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SDA_S_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SDA_S_GetValue()           PORTAbits.RA4
#define SDA_S_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SDA_S_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SDA_S_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SDA_S_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SDA_S_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SDA_S_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SDA_S_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SDA_S_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set PULS2 aliases
#define PULS2_TRIS                 TRISAbits.TRISA5
#define PULS2_LAT                  LATAbits.LATA5
#define PULS2_PORT                 PORTAbits.RA5
#define PULS2_WPU                  WPUAbits.WPUA5
#define PULS2_OD                   ODCONAbits.ODCA5
#define PULS2_ANS                  ANSELAbits.ANSA5
#define PULS2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define PULS2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define PULS2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define PULS2_GetValue()           PORTAbits.RA5
#define PULS2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define PULS2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define PULS2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define PULS2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define PULS2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define PULS2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define PULS2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define PULS2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set PULS1 aliases
#define PULS1_TRIS                 TRISBbits.TRISB0
#define PULS1_LAT                  LATBbits.LATB0
#define PULS1_PORT                 PORTBbits.RB0
#define PULS1_WPU                  WPUBbits.WPUB0
#define PULS1_OD                   ODCONBbits.ODCB0
#define PULS1_ANS                  ANSELBbits.ANSB0
#define PULS1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define PULS1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define PULS1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define PULS1_GetValue()           PORTBbits.RB0
#define PULS1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define PULS1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define PULS1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define PULS1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define PULS1_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define PULS1_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define PULS1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define PULS1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IDCH0 aliases
#define IDCH0_TRIS                 TRISBbits.TRISB1
#define IDCH0_LAT                  LATBbits.LATB1
#define IDCH0_PORT                 PORTBbits.RB1
#define IDCH0_WPU                  WPUBbits.WPUB1
#define IDCH0_OD                   ODCONBbits.ODCB1
#define IDCH0_ANS                  ANSELBbits.ANSB1
#define IDCH0_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IDCH0_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IDCH0_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IDCH0_GetValue()           PORTBbits.RB1
#define IDCH0_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IDCH0_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IDCH0_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IDCH0_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IDCH0_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IDCH0_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IDCH0_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IDCH0_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IDCH1 aliases
#define IDCH1_TRIS                 TRISBbits.TRISB2
#define IDCH1_LAT                  LATBbits.LATB2
#define IDCH1_PORT                 PORTBbits.RB2
#define IDCH1_WPU                  WPUBbits.WPUB2
#define IDCH1_OD                   ODCONBbits.ODCB2
#define IDCH1_ANS                  ANSELBbits.ANSB2
#define IDCH1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IDCH1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IDCH1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IDCH1_GetValue()           PORTBbits.RB2
#define IDCH1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IDCH1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IDCH1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IDCH1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IDCH1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IDCH1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IDCH1_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IDCH1_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set REGVOL aliases
#define REGVOL_TRIS                 TRISBbits.TRISB3
#define REGVOL_LAT                  LATBbits.LATB3
#define REGVOL_PORT                 PORTBbits.RB3
#define REGVOL_WPU                  WPUBbits.WPUB3
#define REGVOL_OD                   ODCONBbits.ODCB3
#define REGVOL_ANS                  ANSELBbits.ANSB3
#define REGVOL_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define REGVOL_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define REGVOL_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define REGVOL_GetValue()           PORTBbits.RB3
#define REGVOL_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define REGVOL_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define REGVOL_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define REGVOL_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define REGVOL_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define REGVOL_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define REGVOL_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define REGVOL_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set CMBCAN aliases
#define CMBCAN_TRIS                 TRISBbits.TRISB4
#define CMBCAN_LAT                  LATBbits.LATB4
#define CMBCAN_PORT                 PORTBbits.RB4
#define CMBCAN_WPU                  WPUBbits.WPUB4
#define CMBCAN_OD                   ODCONBbits.ODCB4
#define CMBCAN_ANS                  ANSELBbits.ANSB4
#define CMBCAN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define CMBCAN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define CMBCAN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define CMBCAN_GetValue()           PORTBbits.RB4
#define CMBCAN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define CMBCAN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define CMBCAN_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define CMBCAN_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define CMBCAN_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define CMBCAN_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define CMBCAN_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define CMBCAN_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set READY aliases
#define READY_TRIS                 TRISCbits.TRISC0
#define READY_LAT                  LATCbits.LATC0
#define READY_PORT                 PORTCbits.RC0
#define READY_WPU                  WPUCbits.WPUC0
#define READY_OD                   ODCONCbits.ODCC0
#define READY_ANS                  ANSELCbits.ANSC0
#define READY_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define READY_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define READY_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define READY_GetValue()           PORTCbits.RC0
#define READY_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define READY_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define READY_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define READY_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define READY_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define READY_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define READY_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define READY_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set BUSY aliases
#define BUSY_TRIS                 TRISCbits.TRISC2
#define BUSY_LAT                  LATCbits.LATC2
#define BUSY_PORT                 PORTCbits.RC2
#define BUSY_WPU                  WPUCbits.WPUC2
#define BUSY_OD                   ODCONCbits.ODCC2
#define BUSY_ANS                  ANSELCbits.ANSC2
#define BUSY_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BUSY_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BUSY_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BUSY_GetValue()           PORTCbits.RC2
#define BUSY_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BUSY_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BUSY_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define BUSY_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define BUSY_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define BUSY_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define BUSY_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define BUSY_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SCL2 aliases
#define SCL2_TRIS                 TRISCbits.TRISC3
#define SCL2_LAT                  LATCbits.LATC3
#define SCL2_PORT                 PORTCbits.RC3
#define SCL2_WPU                  WPUCbits.WPUC3
#define SCL2_OD                   ODCONCbits.ODCC3
#define SCL2_ANS                  ANSELCbits.ANSC3
#define SCL2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL2_GetValue()           PORTCbits.RC3
#define SCL2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCL2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCL2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCL2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCL2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA2 aliases
#define SDA2_TRIS                 TRISCbits.TRISC4
#define SDA2_LAT                  LATCbits.LATC4
#define SDA2_PORT                 PORTCbits.RC4
#define SDA2_WPU                  WPUCbits.WPUC4
#define SDA2_OD                   ODCONCbits.ODCC4
#define SDA2_ANS                  ANSELCbits.ANSC4
#define SDA2_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA2_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA2_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA2_GetValue()           PORTCbits.RC4
#define SDA2_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA2_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA2_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDA2_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDA2_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDA2_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDA2_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA2_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RESINT aliases
#define RESINT_TRIS                 TRISCbits.TRISC5
#define RESINT_LAT                  LATCbits.LATC5
#define RESINT_PORT                 PORTCbits.RC5
#define RESINT_WPU                  WPUCbits.WPUC5
#define RESINT_OD                   ODCONCbits.ODCC5
#define RESINT_ANS                  ANSELCbits.ANSC5
#define RESINT_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RESINT_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RESINT_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RESINT_GetValue()           PORTCbits.RC5
#define RESINT_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RESINT_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RESINT_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RESINT_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RESINT_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RESINT_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RESINT_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define RESINT_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SCL_S aliases
#define SCL_S_TRIS                 TRISCbits.TRISC7
#define SCL_S_LAT                  LATCbits.LATC7
#define SCL_S_PORT                 PORTCbits.RC7
#define SCL_S_WPU                  WPUCbits.WPUC7
#define SCL_S_OD                   ODCONCbits.ODCC7
#define SCL_S_ANS                  ANSELCbits.ANSC7
#define SCL_S_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SCL_S_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SCL_S_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SCL_S_GetValue()           PORTCbits.RC7
#define SCL_S_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SCL_S_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SCL_S_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SCL_S_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SCL_S_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SCL_S_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SCL_S_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SCL_S_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/