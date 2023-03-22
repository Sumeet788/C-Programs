//Write a Program to find the area of rectangle

#include<stdio.h>
#include<conio.h>

void main()
{
  int length,breadth;
  printf("The Value of length: ");
  scanf("%d", &length);
  printf("\n");
  printf("The Value of breadth: ");
  scanf("%d", &breadth);
  
  printf("The Area of Rectangle is %d", length*breadth);
  getch();
}
