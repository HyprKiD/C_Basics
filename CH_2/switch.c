#include <stdio.h> 

int main(){
    int p;
    printf("Program to shor use of switch\n");
    printf("Switch-case is used when we have to make a choice between the number of alternatives for a given variable\n");
    
    printf("program to find star using rating \n");
    printf("Enter your rating(1-5)\n");
    scanf("%d", &p);
    switch(p){
        case 1 :
            printf("1 star ");
            break;
            
        case 2 :
            printf("2 star");
            break;
        case 3 :
            printf("3 star");
            break;
        case 4 :
            printf("4 star");
            break;
        case 5 :
            printf("5 star");
            break;
        default :
            printf("Invalid input");
            break;



        
    }   
    return 0;
}
