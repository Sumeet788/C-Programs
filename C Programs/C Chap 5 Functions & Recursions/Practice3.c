// Number 3 from Practice Set 5
// Write a program to calculate the force of attraction on a body of mass m exerted by earth // 

#include<stdio.h>
#include<conio.h>

float force(float mass)     // function prototype + function definition
{
    float force = mass * 9.8;
    return force; 
}

int main()
{
    float m;

    printf("Enter the value of Mass in KG: ");
    scanf("%f", &m);

    printf("The Force of attraction on a body of mass exerted by earth is: %0.2f", force(m));  // function calling
    return 0;
}
