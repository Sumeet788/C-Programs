//Write a program to convert Celsius to Farenheit

#include<stdio.h>
#include<conio.h>

void main()
{
    float Celsius,Farenheit;
    
    printf("The Value of Celsius is: ");
    scanf("%f", &Celsius);

    printf("\n The Conversion of Celsius to Farenheit is: %f ", Celsius*9/5+32);
    getch();

}