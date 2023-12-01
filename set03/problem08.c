#include <stdio.h>
#include <math.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
}

int input_n()
{
    int n;
    printf("Enter the sumber of sides: \n");
    scanf("%d",&n);
    return n;
}

Point input_point(char *prompt_msg)
{
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f",&p.x, &p.y);
    return p;
}

int input_polygon(Polygon *p)
{
    p->sides = input_n();
    printf("Enter the vertices of the polygon: \n");
    for(int i = 0;i < p->sides;i++)
    {
        p->p[i] = input_point("Enter the endpoint co-ordinates (x,y) : \n");   
    }
    return p->sides;
}

float find_distance(Point a,Point b)
{
    int d = sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
    return d;
}

void find_perimeter(Polygon *p)
{
    float perimeter = 0.0;
    for(int i=0; i < p->sides; i++)
    {
        int next = (i + 1) % p->sides;
        perimeter += find_distance(p->p[i], p->p[next]);
    }
    p->perimeter = perimeter;
}

void output(Polygon p)
{
    printf("The perimeter of the polygon is: %f\n",p.perimeter);

}
