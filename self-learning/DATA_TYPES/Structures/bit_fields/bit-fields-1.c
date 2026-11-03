//BIT FOELDS ARE USED TO SPECIFY THE LENGTH OF THE STTRUCTURE MEMBER IN BITS.
//WHEN THE MAX LENGTH IS KNOWN, THESE CAN BE USED TO SPECIFY THE SIZE AND REDUCE MEMEORY CONSUMPTION.

#include <stdio.h>

/*syntax:
typedef struct{
    unsigned int isReady : 1; //one bit allocated to both
    unsigned int error : 1;
}Status;
*/

//eg:

typedef struct{
    unsigned int power : 1;
    unsigned int wifi : 1;
    unsigned int bluetooth : 1;
}DeviceStatus;

int main(){
    DeviceStatus device = {
        1,
        0,
        1
    };

    printf("power: %u\n",device.power);
    printf("WiFi: %u\n", device.wifi);
    printf("Bluetooth: %u", device.bluetooth);

    return 0; 
}




