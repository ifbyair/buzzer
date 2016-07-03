#include <b1.h>
#include <wiringPi.h>
#include <stdio.h>

int main(int ac, char *av[]){
    volatile int i,f;
    wiringPiSetup();

    f = softToneCreate(BUZZ_PIN);
    printf("We got %d",f);

    for(i=0; i<10; i++){
        softToneWrite(BUZZ_PIN,150); 
        delay(5);
        softToneWrite(BUZZ_PIN,0); 
        delay(100);
    }
}
