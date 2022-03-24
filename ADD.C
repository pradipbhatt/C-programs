#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int i,n=4,j,k=1;
     system("cls");
  for(i=1; i<=n;  i++)
  {
      for( j=1; j<=(i);  i++ )
        printf("\t %d",k++);
    printf("\n");
  }
}

