// Number 1 from Practice Set 5
// Write a program to find the average of 3 numbers using functions//

#include<stdio.h>
#include<conio.h>

float avg(float a, float b, float c)   // function prototype + funtion definition
{
    float average = (a + b + c) / 3;
    return average;
}


int main()
{
    float a, b, c;
    float average;

    printf("Enter Value of a: ");
    scanf("%f",&a);
    printf("Enter Value of b: ");
    scanf("%f",&b);
    printf("Enter Value of c: ");   
    scanf("%f",&c);

   average = avg(a,b,c);    //funtion calling

   printf("The average of %0.2f, %0.2f, %0.2f is: %0.2f\n",a,b,c,average);
   return 0;     
}



