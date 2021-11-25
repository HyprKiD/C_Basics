#include <stdio.h> 

int main(){
    int num,a,b,c=0;
    printf("Program to print sum of digits of a three digits number.\n");
    printf("enter num:\n");
    scanf("%d", &num);
    a=num/100;
    b=num%10;
    c=(num%100)/10;
    printf("x%d", a+b+c);
    return 0;
}
