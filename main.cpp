# include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

Timer t1;
Timer t2;

void Led1(){
    t1.start();
while(t1.elapsed_time() < 2000){
led1.write(1);
}
t1.stop();
led1.write(0);
ThisThread::sleep_for(2s);
t1.reset();
}

void Led2(){
    t2.start();
    while(t2.elapsed_time() < 5000){
        led2.write(1);
    }
    t2.stop();
    led2.write(0);
    ThisThread::sleep_for(5s);
    t2.reset();
}

int main(){

while(1){

Led1();
Led2();

}

}