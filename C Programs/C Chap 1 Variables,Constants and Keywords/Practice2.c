//Write a program to find the radius of a circle and the volume of a cylinder

#include<stdio.h>
#include<conio.h>

void main()
{
    int r;
    double pi=3.14;

    printf("The Value of Radius is: \n");
    scanf("%d", &r);

    printf("The Radius of a circle is: %lf \n", pi*r*r);
    
    int h;
    printf("The Value of Height is: \n");
    scanf("%d", &h);

    printf("The Volume of a Cylinder is: %lf", pi*r*r*h);
    getch();
}    
    
