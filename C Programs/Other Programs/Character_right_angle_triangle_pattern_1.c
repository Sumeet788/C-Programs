//  A
//  BB
//  CCC
//  DDDD
//  EEEEE

#include<stdio.h>
#include<conio.h>

int main()
{
    char i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}