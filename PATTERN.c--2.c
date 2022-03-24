#include<stdio.h>
#include<stdlib.h>
float product(float a, float b)
{


  float product;
  product=a*b;
  return(product);
}


int main()
{
 float first , pro;
 int second;
 printf("Enter a float value=");
 scanf("%f",&first);
 printf("\n Enter an integer=");
 scanf("%d",&second);
 pro=product(first,second);
 printf("\n The product is:\t %.2f",pro);
 return 0;
}