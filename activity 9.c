#include<stdio.h>
int main()
{
    int n,a[],sum=0;
    printf(“Enter the total number of numbers\n”);
    scanf(“%d”,&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter a new number\n");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf(“The final sum is %d\n”,sum);
    return 0;
}

