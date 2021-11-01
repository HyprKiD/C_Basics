#include <stdio.h> 

int main(){
    float i,it;
    printf("Program to find the Income Tax you need to pay.\n");
    printf("Enter your annual income in lakhs(LPA);\n");
    scanf("%f", &i);
    if(i<=250000){
        printf("You dont need to pay any tax");
    }
    else if(i>250000 && i<=500000){
        printf("5 percentage lagega\n");
        it=(i-250000)*0.05 ;
        printf("You need to pay %f \n", it);  
    }
    else if(i>500000 && i<=1000000){
        printf("20 percentage lagega\n");
        it=(i-250000)*0.2 ;
        printf("You need to pay %f \n", it);
    }
    else if(i>100000){
        printf("30 percentage lagega\n");
        it=(i-250000)*0.3;
        printf("You need to pay %f \n", it);
    }

    return 0;
}
