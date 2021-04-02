#include<stdio.h>
#include<math.h>
struct vertices
{
    float x;
    float y;
};
typedef struct vertices vertice;
struct rectangle
{
    vertice point[3];
    float area;
};
typedef struct rectangle rect;
void input_1(rect *a)
{
    for(int i=0; i<3; i++)
    {
        scanf("%f.1",&a->point[i].x);
        scanf("%f.1",&a->point[i].y);
    }
}
void input_n(rect a[],int n)
{
    for(int i=0; i<n; i++)
        input_1(&a[i]);
}
void compute_1(rect *a)
{
    float l=sqrt(pow((a->point[1].y-a->point[0].y),2)+pow((a->point[1].x-a->point[0].x),2));
    float b=sqrt(pow((a->point[0].y-a->point[2].y),2)+pow((a->point[0].x-a->point[2].x),2));
    a->area=l*b;
}
void compute_n(rect a[],int n)
{
    for(int i=0; i<n; i++)
        compute_1(&a[i]);
}
void output_1(rect *a)
{
    printf("Area of rectangle with vertices ");
    for(int i=0; i<3; i++)
        printf("(%.1f,%.1f) ",a->point[i].x,a->point[i].y);
    printf("is %.1f\n",a->area);
}
void output_n(rect a[],int n)
{
    for(int i=0; i<n; i++)
        output_1(&a[i]);
}
int main()
{
    int n;
    rect a[100];
    scanf("%d",&n);
    input_n(a,n);
    compute_n(a,n);
    output_n(a,n);
    return 0;
}
