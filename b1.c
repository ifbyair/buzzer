#include <b1.h>
#include <wiringPi.h>
#include <stdio.h>

int main(int ac, char *av[]){
    volatile int i;
    wiringPiSetup();

    for(i=0; i<10; i++){
        softToneWrite(BUZZ_PIN,500); 
        delay(300);
        softToneWrite(BUZZ_PIN,0); 
        delay(300);
    }
}
