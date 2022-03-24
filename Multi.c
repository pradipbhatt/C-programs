#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    system("cls");
    int a,b,c;
    printf("Enter any two numbers to multiply:\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("The product of these numbers is:%d",c);
 getch();
    return 0;
}
