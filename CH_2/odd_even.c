#include <stdio.h> 

int main(){
    int n;
    printf("This is a program to find odd-even number\n");
    printf("Enter number:\n");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("The given number is a even number");
    }
    else{
        printf("ODD number");
    }
    
    return 0;
}
