//Number 10 from practice set 4//

#include<Stdio.h>
#include<conio.h>

int main()
{
    int n,i,prime=1; 

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i+2)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }       
    }

    if(prime == 0)
    {
        printf("The number is not a prime number");
    }
    else
    {
        printf("The number is a prime number");
    }
    return 0;
}