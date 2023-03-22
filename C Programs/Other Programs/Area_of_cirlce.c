#include<stdio.h>
#include<conio.h>

int main()
{
    int radius;
    double pi = 3.14;

    printf("Enter your radius: ");
    scanf("%d", &radius);

    printf("Area of circle: %lf" ,pi * radius * radius);
    return 0;
}