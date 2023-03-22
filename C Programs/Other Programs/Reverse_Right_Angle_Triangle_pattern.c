//      *
//     ** 
//    ***      
//   ****
//  *****   

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,num;

    printf("How many rows and columns u want to print: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}