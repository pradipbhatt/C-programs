#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,b;
    float sum;
    system("cls");          /*First program made by pradip*/
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    sum=a+b;
    printf("The sum is:%.2f",sum);
    getchar();
    return 0;
}