//Write a program to find the simple interest

#include<stdio.h>
#include<conio.h>

void main()

{
    int principle,rate,years;

    printf("The Value of principle is: ");
    scanf("%d", &principle);

    printf("The Value of rate is : ");
    scanf("%d", &rate);

    printf("The Value of years is: ");
    scanf("%d", &years);

    printf("The answer of Simple Interest is: %d", principle*rate*years/100);    
}