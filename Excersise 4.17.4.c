#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,s;
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("Enter the first number and second number:");
    scanf("%d%d",&a,&b);
    s=a*b;
    printf("The sum of two number is :%d",s);
    return 0;

}