#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a,b;
    float res;
    printf("Enter the first point coordinates\n");
    a=input();
    b=input();
    dist(a,b,&res);
    output(a,b,res);
}
Point input()
{
    Point a;
    printf("Enter the x-coordinate : \n");
    scanf("%f",&a.x);
    printf("Enter the y-coordinate : \n");
    scanf("%f",&a.y);
    return a;
}
void dist(Point a, Point b, float *res)
{
    float dx=a.x - b.x;
    float dy=a.y - b.y;
    *res= sqrt( ( dx * dx ) + ( dy * dy) );
}
void output(Point a, Point b, float res)
{
    printf("The Distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}