#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int  i,p,t,r;
    printf("Enter the value of p,t,r:");
    scanf("%d%d%d",&p,&t,&r);
    i=(p*t*r)/100;
    printf("Value of i is=%d",i);
    getch();
}