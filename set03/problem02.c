#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,y1,x2,y2,x3,y3,result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the point x1: \n");
    scanf("%f",x1);
    printf("Enter the point y1: \n");
    scanf("%f",y1);
    printf("Enter the point x2: \n");
    scanf("%f",x2);
    printf("Enter the point y2: \n");
    scanf("%f",y2);
    printf("Enter the point x3: \n");
    scanf("%f",x3);
    printf("Enter the point y3: \n");
    scanf("%f",y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int result;
    float d1,d2,d3,a,b,c,d,e,f;
    a=pow(x2-x1,2);
    b=pow(y2-y1,2);
    d1=sqrt(a+b);
    c=pow(x3-x1,2);
    d=pow(y3-y1,2);
    d2=sqrt(c+d);
    e=pow(x3-x2,2);
    f=pow(y3-y2,2);
    d3=sqrt(e+f);
    //if ((d1+d2)>d3 && (d2+d3)>d1 && (d1+d3)>d2)

    if  ((d1+d2)<=d3 || (d2+d3)<=d1 || (d1+d3)<=d2)
    {
        result=0;
        printf("Result %d: ", result);
    }
    else
    {
        result=1;
        
        printf("Inside else Result %d: ", result);
    }
    return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) do forms a triangle \n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) do not forms a triangle \n",x1,y1,x2,y2,x3,y3);
    }
}