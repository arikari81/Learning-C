//checking traingele for categorisation based on length of sides
#include <stdio.h>

int main(){
    int s1, s2, s3;
    printf("ENTER tHE SIDES OF THE TRIANGLE\n");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);

    int res = 0;

    if (s1 == s2 && s2==s3){
        res = 1;
    }
    else{
        if (s1 == s2 || s1 == s3 || s3 == s3){
            res = 2;
        }
        else{
            res = 3;
        }
        
    }
    
    switch(res){
        case 1:
            printf("equilateral triangle\n");
            break;
        case 2:
            printf("isosceles traingle\n");
            break;
        case 3:
            printf("scalen triangle\n");
            break;
        default:
            printf("ERROR\n");
        
    }

    return 0;
}