#include <stdio.h> 

int main(){
    float p,c,m,t ;
    printf("program to find weather a student is pass or fail \n");
    printf("Enter percentage in PHYSICS \n");
    scanf("%f", &p);
    printf("Enter percentage in CHEMISTRY \n");
    scanf("%f", &c);
    
    printf("Enter percentage in MATHS \n");
    scanf("%f", &m);

    t=(p+c+m)/3;
    
    if(p>=33 && c>=33 && m>=33){
        printf("You passed all subjects individually\n");
        if((p+c+m)/3 >=40 ){
            printf("You passed overall\n%f",t);

        }
        else{
            printf("Overall percentage not greater than 40\n%f",t);
        }
    }
    else{
        printf("Try harder.");
    }
    return 0;
}
