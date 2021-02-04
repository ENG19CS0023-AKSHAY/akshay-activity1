//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int a,b,sum;
void input()
{
     printf("Enter the numbers\n");
     scanf("%d%d",&a,&b);
}
void compute()
{
     sum=a+b;
}
void output ()
{
     printf("Sum=%d",sum);
}
void main()
{
input();
compute();
output();
}
