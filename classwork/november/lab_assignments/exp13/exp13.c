//exp13a
// inplement a function to search for an employee by id from an array of structures
// and return the structure

#include <stdio.h>

typedef struct{
    int empId;
    char name[30];
    float salary;
}Employee;

Employee retEmp(Employee *list, int empID, int n){
    for (int i = 0; i < n; i++){
        if (empID == list[i].empId){
            return list[i];
        }
    }

    Employee notFound = {.empId = -1,.name = "N/A",.salary = 000.00};
    return notFound;
}

int main(){
    Employee empList[] = {
        {123, "JOHN", 1000.0},
        {124, "MARY", 2000.0},
        {143, "GARY", 1220.0}
    };

    int size = (int)(sizeof empList / sizeof empList[0]);

    int id;
    printf("enter the employee id to check: ");
    while (scanf("%d", &id) != 1){
        scanf("%*[^\n]");
        printf("not valid, enter again: ");
    }

    Employee ret = retEmp(empList, id, size);
    
    if (ret.empId != -1){
        printf("\temployee found: \n");
        printf("\temployee ID: %d\n", ret.empId);
        printf("\temployee name: %s\n", ret.name);
        printf("\temployee salary: %.2f\n", ret.salary);
    }else{
        printf("\temployee not found\n");
    }

    return 0;
}






