//Write a C program to calculate the surface area of a cylinder
#include<stdio.h>
int main(void)
{
    const float PI = 3.14;
          float r,h,Area;

    printf("Enter Radius and Height of the Cylinder\n");
    scanf("%f%f",&r,&h);

    Area=(2*PI*r*h)+(2*PI*r*r);

    printf("Surface Area of Cylinder is %f\n", Area);

    return 0;
}

