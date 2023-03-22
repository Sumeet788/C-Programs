// Number 8 part 1st from practice set 4 //

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,factorial=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial *= i;   // factorial = factorial * i; //
    }

    printf("The factorial of the %d is = %d", n,factorial);

    return 0;
}

