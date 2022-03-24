#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int i,j,k=1;
     system("cls");
  for(i=1; i<=5;  i++)
  {
      for( j=1; j<=5;  j++ )
        printf(" ");
      for( k=1; k<=i; k++)
        printf("%d",k);
    printf("\n ");
  }
}

