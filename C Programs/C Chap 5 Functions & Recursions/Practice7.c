// Number 7 from Practice Set 5 //
// Write a program using functions to print the following pattern(first n lines)

// *
// * *
// * * *
// * * * *
// * * * * *


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;                              // i = row;
    int i;                              // j = column;
    int j;
    printf("Enter the number: "); 
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        // print (i+1) stars

        for(j=0; j<i+1; j++)
        {
            printf("*");
        }
         printf("\n");
    }
    return 0;
}
