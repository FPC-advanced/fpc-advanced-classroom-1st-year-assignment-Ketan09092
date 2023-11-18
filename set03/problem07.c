#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Line l= input_line();
    find_length(&l);
    output(l);
    return 0;
}
Point input_point()
{
    Point a;
    printf("Enter the point x: \n");
    scanf("%f",&a.x);
    printf("Enter the point y : \n");
    scanf("%f",&a.y);
    return a;
}
Line input_line()
{
    Line l;
    printf("Enter thecoordinate for point1 : \n");
    l.p1=input_point();
    printf("Enter thecoordinate for point2 : \n");
    l.p2=input_point();
    return l;
}
void find_length(Line *l)
{
    float dx,dy;
    dx = l->p1.x - l->p2.x;
    dy = l->p1.y - l->p2.y;
    l->distance=sqrt((dx*dx)+(dy*dy));
}
void output(Line l)
{
    printf("Length of the Line: %f \n",l.distance);
}