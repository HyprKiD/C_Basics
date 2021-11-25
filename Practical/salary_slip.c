#include <stdio.h> 

int main(){
    float bp,hra,ta,da=0;
    scanf ("%f", &bp);
    hra=10*bp/100;
    ta=5*bp/100;
    da=15*bp/100;
    printf("%0.2f",bp+hra+ta+da);
    return 0;
}
