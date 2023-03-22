// Number 6 from practice set 5//
// Write a recursive function to calculate the sum of first n natural numbers //

#include <stdio.h>
#include <conio.h>

int sum(int num)
{
    int sum = 0;
    int i;
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    int ans;
    printf("Enter the number: ");
    scanf("%d", &n);
    ans = sum(n);
    printf("%d", ans);
} 