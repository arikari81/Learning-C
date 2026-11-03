//nested structures in c

#include <stdio.h>

//child strcut: 
typedef struct child
{
    int x;
    char c;
}child;

//parent strcut:
typedef struct parent
{
    int a;
    child b;
}parent;
 
int main(){
    parent p = 
    {
        25,
        195,
        'A',
    };

    //printing and accessing nested members:
    printf("p.a = %d\n", p.a);
    printf("p.b.x = %d\n", p.b.x);
    printf("p.b.c = %d\n", p.b.c);

    return 0;
}





