#include<stdio.h>
long int factorial(int n)
{
   if (n==1)
   return(1);
   else
   return(n*factorial(n-1));
}
int main()
{
int num,p;
printf("\nEnter the number=");
scanf("%d",&num);
p=factorial(num);
printf("\n The factorial is:%ld",p);
return 0;
}
