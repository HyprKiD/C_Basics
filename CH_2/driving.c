#include <stdio.h> 

int main(){
    int age;
    printf("This is a program to test driving age\n"); 
    printf("Enter your age:\n");
    scanf("%d", &age); 
    if(age>=18 && age<70 || age==4){
        printf("you are elegible to drive");
    }
    else{
        printf("You cant drive"); 
    }
    
    return 0;


}
