#include <stdio.h> 

int main(){
    float p;
    printf("Program to convert percentage into grades\n");
    printf("Enter percentage :\n");
    scanf("%f", &p);
    if (100>p && p>90){
        printf("A grade");
    }
    else if(90>p && p>80){
        printf("B grade");
    }
    else if(80>p && p>70){
        printf("C grade");
    }   
    else if(70>p && p>60){
        printf("D grade");
    }
    else{
        printf("Invalid percentage");
    }
    return 0;
}
