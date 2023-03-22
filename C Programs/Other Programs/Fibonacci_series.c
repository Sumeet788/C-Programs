// Fibonacci Series 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a = 1;
    int b = 1;
    int num;
    int fibo;

    printf("Enter Your Number: ");
    scanf("%d",&num);

    if (num >= 2)
    {
        printf("1 1 ");
    
    }

    else if(num <= 0)
    {
       printf("Invalid Number"); 

    }
    
    else
    { 
        printf("1");
    
    }
    

    for(int i=1;i<=num-2;i++)               // test: for(int i=1; i<=num-4; i++)
    {                                                                       
        fibo = a + b;               //  fibo = 0 + 1 = 1
        a = b ;                     // a = b ... a = (b=1)... a = 1
        b = fibo;                   // b = fibo... b = (fibo = 1)... b = 1
        printf("%d ", fibo);        // fibo = 2... a = 1, b = 2...
                                    // fibo = 3.. a = 2,b = 3...
    }
}