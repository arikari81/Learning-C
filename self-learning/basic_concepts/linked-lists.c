//linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ //temp name may be given because self defined within
                      //and thus the real name hasnt been defined yet
    int x;
    struct Node* next; //pointer ti the same type of element

}Node; 

int main(){

    Node root, elem2; //root is elekemtn one
    root.x  = 15;
    root.next = malloc(sizeof(Node)); //pointer to the next element
    root.next->x = -2;
    root.next->next = NULL; //ie this is the last element

    printf("First element is %d\n", root.x); //root.next is a pointer to further elements
    printf("Second element is %d\n", root.next -> x); // or (*root.next).x

    free(root.next);

    return 0;
}

