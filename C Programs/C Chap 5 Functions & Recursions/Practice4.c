// Number 4 from Practice Set 5
//Write a program using recursion to calculate the Nth element of fibonacci series  //

#include<stdio.h>
#include<conio.h>

int fibo(int n)         // function prototype + function definition
{
    if (n==0 || n==1)
    {
        printf(" 1 ");
        return 1;
    }
    else
    {
        return (fibo(n-1) + fibo(n-2));
    }

}

int main()
{
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The Number of Fibonaaci Series is: ",fibo(num));
    return  fibo(num);
}