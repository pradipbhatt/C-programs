#include<stdio.h>
int main()
{
int num;
printf("\nEnter the number=");
scanf("%d",&num);
printf("\n The factorial is:%ld",factorial(num));
return 0;
}

long int factorial(int n)
{
   if (n==1)
   {
       return(1);
   }
   else
   return(n*factorial(n-1));
}