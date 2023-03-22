// *****
// ****
// ***
// **
// *

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,j;

    printf("How many rows and columns u want to print: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}    
