//Project 1 from project set 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() %100 + 1 ;  // Generates a random number between 1 to 100 //

   //Keep running the program until it is guessed//
    
    do{
        printf("Guess the number: \n");
        scanf("%d", &guess);   

        if(guess>number)
        {
            printf("Lower Number Please!!\n");
        }    
        else if(guess<number)
        {
            printf("Higher Number Please!!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
     
     return 0;
}