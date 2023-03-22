#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    int remainder;
    int result = 0;
    int temp;

    printf("Enter your number: ");
    scanf("%d", &number);
    printf("\n");

    temp = number;

    while(temp != 0)
    {
        remainder = temp % 10;
        result = result * 10 + remainder;
        temp = temp / 10; 
    }

    if(result == number)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not a Palindrome\n");
    }
    
    return 0;
}
