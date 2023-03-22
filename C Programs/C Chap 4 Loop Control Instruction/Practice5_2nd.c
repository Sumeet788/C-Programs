//Number 5 2nd part from Practice set 4

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0;

    printf("The number is: \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("The sum is: %d",sum);
    return 0;
}