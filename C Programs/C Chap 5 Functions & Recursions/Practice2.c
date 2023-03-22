// Number 2 from Practice Set 5
//Write a program to convert celsius temperature into farenheit //

#include<stdio.h>
#include<conio.h>

float temp(float Celsius)                  // function prototype + function definition 
{
    float temperature = Celsius * 9/5 + 32;
    return temperature;
}

int main()
{
    float Celsius;

    printf("Enter the value of Celsius: ");
    scanf("%f",&Celsius);          

    printf("The Conversion of Celsius to Farenheit is: %0.2f",temp(Celsius));     //function calling
    return 0;
}