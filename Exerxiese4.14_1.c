#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a=5, b=10;
    system("cls");
    a=b+a;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;
}