#include <stdio.h> 

int main(){
    char c;
    printf("Program to determine whether a character entered by the user is lowercase or not\n");
    printf("Enter char:\n");
    scanf("%c", &c);
    //in ASCII Lowercase starts from 9 and goes till 122
    if(c>=97 && c<=122){
        printf("LOWERCASE");
    }
    else{
        printf("NOT LOWERCASE");
    }
    return 0;
}
