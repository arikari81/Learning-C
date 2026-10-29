//print divisible nos by 3 bw 1 and 15

#include <stdio.h>

int main(void){

    for(int i = 1; i < 16; i++){
        if(i % 3 == 0){
            printf("%d\n", i);
        }
    }
    
}