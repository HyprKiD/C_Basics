#include <stdio.h> 

int main(){
    int a;
    printf("A short if else statement can be written using conditional or ternary operators\n");
    //(condition)? code : else wala code
    printf("Enter a :\n");
    scanf("%d", &a);
    (a>18)? printf("Bada ho gya h") : printf("Babu h aabhi"); 
    return 0;
}
