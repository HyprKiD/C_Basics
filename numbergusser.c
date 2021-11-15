#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    int num,g;
    int count=1;
    srand(time(0));
    num=rand()%100+1;\\gives a random number between 1 to 100
    printf("The number is %d\n",num);
    do
    { 
        printf("Guess a number between 1 to 100:\n");
        scanf("%d", &g);

        if (g<num)
        {
            printf("Try going higher!\n");
        }
        if (g>num)
        {
            printf("Try going lower!\n");
        }
        if(num==g)
        {
            printf("GG!!you guessed it in %d attempts",count);
        }
        count++;
    } while (num!=g);
    
    return 0;
}
