// double linked self referential structures.
//will allow a node to connect to two or more nodes

#include <stdio.h>

//prev and next have been used here whcih will allow
//traversal in bakcward and forward directions
//used for doubly linked lists

typedef struct meow{
    int data;
    struct meow* prev;
    struct meow* next;
}Node;

int main(){

    //declarations and initialisations:
    Node ob1;

    ob1.prev = NULL;
    ob1.next = NULL;
    ob1.data  = 10;

    Node ob2;

    ob2.prev = NULL;
    ob2.next = NULL;
    ob2.data = 20;

    Node ob3;

    ob3.prev = NULL;
    ob3.next = NULL;
    ob3.data = 30;

    //forward links:
    ob1.next = &ob2;
    ob2.next = &ob3;

    //backward links
    ob2.prev = &ob1;
    ob3.prev = &ob2;

    //printing data for ob1, ob2, and ob3 using  ob1
    printf("ob1 data is %d\n", ob1.data);
    printf("ob2 data is %d\n", ob1.next->data);
    printf("ob3 data is %d\n", ob1.next->next->data);
 
    //printing using ob2
    printf("\nob1 data is %d\n", ob2.prev->data);
    printf("ob2 data is %d\n", ob2.data);
    printf("ob3 data is %d\n", ob2.next->data);

    //printing using ob3
    printf("\nob1 data is %d\n", ob3.prev->prev->data);
    printf("ob2 data is %d\n", ob3.prev->data);
    printf("ob3 data is %d\n", ob3.data);

    return 0;
}

//effecient storage of boolean  values







