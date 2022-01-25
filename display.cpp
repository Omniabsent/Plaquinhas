#include "mbed.h"

DigitalOut myled(LED1);

DigitalOut seg_A(PA_8);
DigitalOut seg_B(PB_10);
DigitalOut seg_C(PB_4);
DigitalOut seg_D(PB_5);
DigitalOut seg_E(PB_3);
DigitalOut seg_F(PA_10);
DigitalOut seg_G(PA_9);
DigitalOut seg_DP(PC_7);


int main() {
    seg_A = 0;
    seg_B = 0;
    seg_C = 0;
    seg_D = 0;
    seg_E = 0;
    seg_F = 0;
    seg_G = 0;
    seg_DP = 0;        
    while(1){
        seg_A = 1;  // 0
        seg_B = 1;
        seg_C = 1;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 0;      
        wait_ms(311);
        seg_A = 0;  // 1
        seg_B = 1;
        seg_C = 1;
        seg_D = 0;
        seg_E = 0;
        seg_F = 0;
        seg_G = 0;      
        wait_ms(311);
        seg_A = 1;  // 2
        seg_B = 1;
        seg_C = 0;
        seg_D = 1;
        seg_E = 1;
        seg_F = 0;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // 3
        seg_B = 1;
        seg_C = 1;
        seg_D = 1;
        seg_E = 0;
        seg_F = 0;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 0;  // 4
        seg_B = 1;
        seg_C = 1;
        seg_D = 0;
        seg_E = 0;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // 5
        seg_B = 0;
        seg_C = 1;
        seg_D = 1;
        seg_E = 0;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // 6
        seg_B = 0;
        seg_C = 1;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // 7
        seg_B = 1;
        seg_C = 1;
        seg_D = 0;
        seg_E = 0;
        seg_F = 0;
        seg_G = 0;      
        wait_ms(311);
        seg_A = 1;  // 8
        seg_B = 1;
        seg_C = 1;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // 9
        seg_B = 1;
        seg_C = 1;
        seg_D = 0;
        seg_E = 0;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // A
        seg_B = 1;
        seg_C = 1;
        seg_D = 0;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 0;  // B
        seg_B = 0;
        seg_C = 1;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // C
        seg_B = 0;
        seg_C = 0;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 0;      
        wait_ms(311);
        seg_A = 0;  // D
        seg_B = 1;
        seg_C = 1;
        seg_D = 1;
        seg_E = 1;
        seg_F = 0;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // E
        seg_B = 0;
        seg_C = 0;
        seg_D = 1;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
        seg_A = 1;  // F
        seg_B = 0;
        seg_C = 0;
        seg_D = 0;
        seg_E = 1;
        seg_F = 1;
        seg_G = 1;      
        wait_ms(311);
    }  
}

