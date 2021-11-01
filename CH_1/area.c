#include <stdio.h> 

int main(){
    int len, b, area;
    printf("Enter the length of rect \n");
    scanf("%d", &len);
    printf("Enter the breadth of rect \n");
    scanf("%d", &b);
    area = len*b;
    printf("area of rectangle is %d",area);
    return 0;
}


//circle

#include <stdio.h> 

int main(){
    int r;
    float pi=2.14;
    printf("Enter the value of radius; \n");
    scanf("%d", &r);
    float ar = pi*r*r ;
    printf("area of circle is : %f",ar);
    return 0;
}


//cylinder


#include <stdio.h> 

int main(){
    float r,h;
    float pi=2.14;
    printf("Program to find the volume of a cylinder\n");
    printf("Enter the value of radius; \n");
    scanf("%f", &r);

    printf("Enter the value of height; \n");
    scanf("%f", &h);
    float ar = pi*r*r*h ;
    printf("area of cylinder is : %f",ar);
    return 0;
    
}
