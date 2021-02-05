#include<stdio.h>
int main()
{
int n,sum=0;
printf(“Enter the total number of numbers\n”);
scanf(“%d”,&n);
for(int i=1;i<=n;i++)
sum=sum+i;
printf(“The final sum is %d\n”,sum);
return 0;
}
