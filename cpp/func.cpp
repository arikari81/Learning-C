//fucntions

#include <iostream>
using namespace std;

void say(){
    cout << "Hello User\n";
}

double cube(double num){
    double result = num * num * num;
    return result;
}

int main(){
    /*
    say();
    double ans = cube(5.0);
    cout << ans << "\n";
    */

    int numgrid[3][2] = {

                        {1, 2},
                        {3, 4},
                        {5, 6},
                    };         
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j< 2; j++){
            cout << numgrid[i][j] << " ";
        }
        cout << "\n";
    }                
    
    return 0;
}