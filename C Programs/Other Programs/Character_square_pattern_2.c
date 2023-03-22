//  ABCDE
//  ABCDE
//  ABCDE
//  ABCDE
//  ABCDE

#include<stdio.h>
#include<conio.h>

int main()
{
    char i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}