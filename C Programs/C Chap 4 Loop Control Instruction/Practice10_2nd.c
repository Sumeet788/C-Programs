//Number 10 part 2nd from practice set 4//

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=2,n,prime=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n % i == 0 )
    {
        prime = 1;
        break;
    }
    i++;

    if(prime == 0)
    {
        printf("The Number is a prime number");
    }
    else
    {
        printf("The Number is not a prime number");
    }
    
     return 0;
}

