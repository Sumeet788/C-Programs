// Number 5 1st part from practice set 4

#include<stdio.h>
#include<conio.h>

int main()
{
   int i=1,sum=0,n;

   printf("Enter the number: ");
   scanf("%d",&n);

   do{
       sum+=i;
       i++;
   }while(i<=n);

   printf("The sum of the numbers is: %d",sum);

   return 0;
}