//WAP to find the sum of n fractions.
#include<stdio.h>
struct fract
{
    int  num;
    int  deno;
};
typedef struct fract fraction;
fraction input()
{
    fraction a;
    printf("Enter the numerator\n");
    scanf("%d",&a.num);
    printf("Enter the denominator\n");
    scanf("%d",&a.deno);
    return a;
}
fraction sum(fraction a,fraction b)
{
    fraction res;
    if(a.deno==b.deno)
    {
        res.deno=a.deno;
        res.num=a.num+b.num;
    }
    else
    {
        res.deno=a.deno*b.deno;
        res.num=(a.num*b.deno)+(b.num*a.deno);
    }
    return res;
}
int main()
{
    int n;
    printf("Enter the number of fractions\n");
    scanf("%d",&n);
    fraction c,a[n];
    c.num=0;
    c.deno=1;
    for(int i=0;i<n;i++)
    {
        printf("For fraction %d ",(i+1));
        a[i]=input();
    }
    for(int i=0;i<n;i++)
    {
        c=sum(c,a[i]);
    }
    printf("The final sum is %d/%d which is %.2f %",c.num,c.deno,(c.num/(1.0*c.deno))*100);
    return 0;
}
