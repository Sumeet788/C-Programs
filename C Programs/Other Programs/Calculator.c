#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c; 
}

int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

int div(int a, int b)
{
    int c;
    c = a / b;
    return c;
}


int main()
{
    int num_1;
    int num_2;
    int choice;

    printf("Enter your First Number: \n");
    scanf("%d", &num_1);

    printf("Enter your Second Number: \n");
    scanf("%d", &num_2);
    printf("\n");
    
    printf("Choice 1: Sum\n");
    printf("Choice 2: Sub\n");
    printf("Choice 3: Mul\n");
    printf("Choice 4: Div\n");

    printf("Enter your Choice: \n");
    scanf("%d", &choice);
    printf("\n");    

    switch(choice)
    {
        case 1: 
            printf("Sum is: %d",add(num_1,num_2));
            break;

        case 2:
            printf("Sub is: %d",sub(num_1,num_2));
            break;

        case 3:
            printf("Mul is: %d",mul(num_1,num_2));
            break;

        case 4:
            printf("Div is: %d",div(num_1,num_2));
            break;
        
        default: 
            printf("Enter valid choice");
    }
    return 0;
}