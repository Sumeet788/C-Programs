//  EEEEE
//  DDDDD
//  CCCCC
//  BBBBB
//  AAAAA

#include<stdio.h>
#include<conio.h>

int main()
{
    char i,j;

    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}

