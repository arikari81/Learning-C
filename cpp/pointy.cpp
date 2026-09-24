//pointers

#include <iostream>
using namespace std;
int main(){
    int age = 10;
    double gpa = 2.2;
    string name = "Mike";
    cout << &age << endl;
    int *pow = &age;
    cout << *pow << endl;
    return 0;
}