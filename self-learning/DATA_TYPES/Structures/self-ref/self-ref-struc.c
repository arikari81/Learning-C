//SELF REFERENTIAL STRUCTURES(eg. NODES) are used commonnly to implement dynamic data strcutures
//like linked lists. They contain pointer(s) to the same type of struct as a memembr(s).

#include <stdio.h>

/*  SYNATX:
typedef struct temp_struct_name{
    data_type member1;
    data_type memember2;
    struct struct_name *pointer_name;
}struct_name;
*/

//eg(single link):
typedef struct Node{
    int data1;
    char data2;
    struct Node* link;
}Node;

int main(){
    Node obj;

    obj.data1 = 10;
    obj.data2 = 'A';
    obj.link = NULL; //kways initialise self referential pointers to to NULL/nullptr

    return 0;
}







