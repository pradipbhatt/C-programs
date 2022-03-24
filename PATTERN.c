#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int i,n,j;
     system("cls");
     printf("Enter the value of n");
     scanf("%d",&n);
     for ( i = 1; i <=n; i++)
     {
          for ( j = 1; j < ((n-2)-i); j++)
          {
               printf("\t *");
          }


     printf("\n ");
     }
getchar();
return 0;
}
