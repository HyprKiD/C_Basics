#include <stdio.h> 

int main(){
    int y;
    printf("Program to find weather a year is leap year.\n");
    printf("Enter year:\n");
    scanf("%d", &y);
    if (y%4==0 && !(y%100==0) || y%400==0){
    
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
