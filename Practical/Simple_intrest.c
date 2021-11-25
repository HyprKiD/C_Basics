#include <stdio.h> 

int main(){
    float p,t,r,si;
    // printf("Enter the Principle amount :\n");
    scanf("%f", &p);
    // printf("Enter Time :\n");
    scanf("%f", &t);
    // printf("Enter the rate percentage :\n");
    scanf("%f", &r);
    si=p*r*t/100;
    printf("%f",si);
    return 0;

}
