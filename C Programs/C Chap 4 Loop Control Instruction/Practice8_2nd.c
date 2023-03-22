// Number 8 part 2nd from practice set 4

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=1,factorial=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }

    printf("The factorial of %d is= %d",n,factorial);
    return 0;
}