//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b,volume;
    printf("Enter height,breadth and depth\n");
    scanf("%f%f%f",&h,&d,&b);
    volume=((h*d*b)+(d/b))/3.0;
    printf("Volume=%f",volume);
    return 0;
}
