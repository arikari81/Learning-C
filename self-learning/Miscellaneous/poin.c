	#include <stdio.h>
    
    void increment(int *v) {
        (*v)++; 
    }
      	int main() {
        int a;
        scanf("%d", &a);
        printf("%d\n", a);
        increment(&a);
        printf("%d\n", a);
    	return 0;      
    }     