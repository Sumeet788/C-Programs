// *
// **
// ***
// ****
// *****


#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,j;

    printf("How many rows and columns u want to print: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }    
    printf("\n");
    }

    return 0;
}