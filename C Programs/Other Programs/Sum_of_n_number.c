#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int sum=0;
    int i;

    printf("Enter your number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    printf("Your Sum is: %d",sum);
    return 0;
}
