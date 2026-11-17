//exp 8 c
//progrm to check if a number is a perfetc squRE

#include <stdio.h>

int main(){
    int n;
    char a;

    printf("enter n: ");
    scanf("%d", &n);

    for (int i = 0; i * i <= n; i++){
        if (i*i == n){
            a = 'Y';
        }else{
            a = 'N';
        }
    }

    printf("%c\n", a);

    return 0;
}



