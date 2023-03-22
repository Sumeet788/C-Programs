//  12345
//  1234
//  123
//  12
//  1

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}