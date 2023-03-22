//Number 4 from Practice set 3//

#include<stdio.h>
#include<conio.h>

int main()
{
    int y; // year=y

    printf("Enter your year: \n");
    scanf("%d", &y);

    if ((( y % 4 == 0 && y % 100!= 0 )) ||  ( y % 400 == 0))
    {
        printf("The year is a Leap Year", y); //y=year
    }

    else
    {
        printf("The year is not a Leap Year", y);  //y=year
    }

    return 0;
}
