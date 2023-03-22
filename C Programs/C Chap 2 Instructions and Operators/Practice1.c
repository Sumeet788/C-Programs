//Write a program to find whether the number is divisible by 97 or not

#include<stdio.h>
#include<conio.h>

void main()

{
    int num;
    printf("Enter the number: ");
    scanf("\n %d", &num);

    if(num%97==0)
    {
        printf("The number is divisible by 97");
    }
    
    else
    {
        printf("The number is not divisible by 97");
    }

getch();
}

