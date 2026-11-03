//singly linked self-ref strfuctures

#include <stdio.h>

//contains one pointer that points to anotehr object of the same structure type 
// single self poiter to sinnect one node to another
//used for singly linked lists
//each node cam directly reference only one next node

typedef struct meow{
    int data1;
    char data2;
    struct meow* link;
}Node;

int main(){

    Node ob1; //node one

    //initialisation:
    ob1.link = NULL;
    ob1.data1 = 10;
    ob1.data2 = 20; //bcs a char is a 1 bute integer in c, assigning 20 is valid,
                    //the compiler converts 20 into binary and saves it.

    Node ob2;

    ob2.link = NULL;
    ob2.data1 = 30;
    ob2.data2 = 40;

    //linking both objects:
    ob1.link = &ob2;

    //accessing data memebrs of ob2 using ob1;

    printf("data1 from ob2 is %d\n", ob1.link->data1);
    printf("data2 from ob2 is %d\n", (*(ob1.link)).data2);

    return 0;
}