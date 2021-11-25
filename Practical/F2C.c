#include <stdio.h> 

int main(){
    float f;
    // printf("Profram to convert f to c.\n");
    // printf("enter F:\n");
    scanf("%f", &f);
    float c=(f-32)*5/9;
    printf("%0.2f",c);
    return 0;
}
