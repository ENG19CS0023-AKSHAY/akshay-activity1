#include<stdio.h>
struct Fract
{
    int num;
    int den;
};
typedef struct Fract fract;
struct  Egyptian
{
    int m;
    int den[100];
    fract sum;
}; 
typedef struct Egyptian egyp;
void input_1(egyp *one)
{
    scanf("%d",&one->m);
       for(int i=0;i<one->m;i++)
              scanf("%d",&one->den[i]);
}
void input_n(int n,egyp Negyp[n])
{
    for(int i=0;i<n;i++)
              input_1(&Negyp[i]);
}
int gcd(int a,int b)
{
    a=a<b?a:b;
    if(b%a==0)
       return a;
       for(int i=a/2;i>1;i--)
       {
              if(a%i==0&&b%i==0)
                     return i;
       }
       return 1;
}
void compute_1(egyp *one)
{
    fract f;
       f.num=0;
       f.den=1;
       int Gcd;
    for(int i=0;i<one->m;i++)
       {
        one->sum.num=(f.num*one->den[i])+f.den;
              one->sum.den=f.den*one->den[i];
              Gcd=gcd(one->sum.num,one->sum.den);
              one->sum.num=one->sum.num/Gcd;
              one->sum.den=one->sum.den/Gcd;
        f=one->sum;
       }
}
void compute(int n,egyp Negyp[n])
{
    for(int i=0;i<n;i++)
              compute_1(&Negyp[i]);
}
void output_1(egyp *one)
{
    for(int i=0;i<(one->m)-1;i++)
              printf("1/%d+",one->den[i]);
       printf("1/%d=%d/%d\n",one->den[(one->m)-1],one->sum.num,one->sum.den);
}
void output_n(int n,egyp Negyp[n])
{
    for(int i=0;i<n;i++)
        output_1(&Negyp[i]);
}
int main()
{
       int n;
       scanf("%d",&n);
       egyp Negyp[n];
       input_n(n,Negyp);
       compute(n,Negyp);
       output_n(n,Negyp);
       return 0;
} 
