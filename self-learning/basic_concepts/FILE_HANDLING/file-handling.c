// file handling
// opening and writing/appending

#include <stdio.h>

int main(){
    FILE *pF = fopen("file-handling-sample.txt", "a"); //FILE is predefined, pF is a pointer, w/r/a/ are modes
    
    fprintf(pF, "86364720367745685428458745152412842828412689428426841256896232000000000000000021521020125424125412434378");
    /*no dereferencing*/
    //fprintf writes to the file

    fclose(pF);
    return 0;
}






