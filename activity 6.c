//WAP to find the distance between two point using 4 functions.
#include<stdio.h>

#include<math.h>

float input()

{

    float a; 

    scanf("%f",&a);

    return a;

}


float find_distance(float x1, float y1 ,float x2,float y2)

{

    float d;

   d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    return d;

}


void output(float a,float b,float c,float d,float e)

{

    printf("The distance between (%f,%f) and (%f,%f) is %f\n”,b,c,d,e,a);
}
int main()
{
    float x,x1,y,y1;
    
    printf("Enter X coordinate\n");
    
    x=input();
    printf("Enter Y coordinate\n");
    y=input();
    
    printf("Enter X1 coordinate\n");
    x1=input();
    printf("Enter Y1 coordinate\n");
    y1=input();
    z=find_distance(x,y,x1,y1);
    output(z,x,y,x1,y1);
    return 0;
}

