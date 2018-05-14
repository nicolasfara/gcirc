#include "barometro.h"
#include "mcc_generated_files/i2c2.h"

char stop = 0;
uint8_t readPress[3] = { 0 };
uint8_t readData[3] = { 0 };
uint8_t writeReg[1] = { 0 };
uint8_t writeReg2[1] = { 0 };
I2C2_TRANSACTION_REQUEST_BLOCK TRB[3]; // List of I2C transactions
I2C2_MESSAGE_STATUS status; // I2C status

char check_work()
{
    return stop;
}

uint24_t read_pressure() 
{   
    uint8_t try = 100;
    //setup osr and channel
    writeReg[0] = 0x40 | 2 << 2;
    //read pressure command
    writeReg2[0] = 0x30;
    
    I2C2_MasterWriteTRBBuild(&TRB[0], writeReg, 1, ADDRESS);
    I2C2_MasterWriteTRBBuild(&TRB[1], writeReg2, 1, ADDRESS);
    I2C2_MasterReadTRBBuild(&TRB[2], readPress, 3, ADDRESS);
    
    I2C2_MasterTRBInsert(3, TRB, &status);
    //timeout of 100 retry
    while (status == I2C2_MESSAGE_PENDING && --try > 0);
    if(!try) {
        stop = 1;
        return -1;
    }
    
    uint24_t msb = (readPress[0] & 0x0f) * 65536;
    uint24_t csb = (readPress[1] * 256) & 0x00ffff;
    uint24_t lsb = readPress[2] * 256 & 0x0000ff;
    
    return (msb + csb + lsb) & 0x00ffffff;
}

float read_meters() {
    uint24_t val = read_pressure();
    if(val == -1) {
        return -1;
    }
    return 2.5 * (val - SEA_PRESSURE) / (ACC_GRAVITY * WATER_DENSITY);
}
