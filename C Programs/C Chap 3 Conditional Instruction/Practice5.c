// Number 5 from practice set 3//

#include<stdio.h>
#include<conio.h>

void main()
{
    // 97 to 122 are a-z (lower case) in ASCII Values// 
    char c;
    
    printf("Enter Your character: \n");
    scanf("%c",&c);

    if(c<=122 && c>=97)
    {
        printf("It is a Lowecase");
    } 

    else
    {
        printf("It is not a lowercase");
    }
    
    getch();
    return 0;
}