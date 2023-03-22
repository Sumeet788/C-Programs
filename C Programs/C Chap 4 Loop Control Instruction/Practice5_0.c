//Number 5--- 0 part from Practice set 4

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum=0,i=1;

    printf("The number is: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The sum of the number is : %d\n",sum);
    return 0;
}