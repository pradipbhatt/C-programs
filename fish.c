
//ellipse.c
/*this code is once compiled,calculates the area of an ellipse after reading major and minor axis*/
#include<stdio.h>
#include<conio.h>
#define Pi 3.1415
void main (void)
{
    float major,minor,area;
    clrscr();
    printf("Enter Major and Minor Axis of an Ellipse");
    scanf("%f %f", &major &minor);
    area=Pi*major*minor;
    printf("\n The area ofr ellipse is: %.2f",area);
    getch();
    return 0;
}

