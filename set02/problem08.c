#include <stdio.h>

typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n;
    n=input_n();
    Triangle t[n];
    Triangle smallest;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
}
int input_n()
{
    int n;
    printf("Enter the number of trianagle : \n");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle()
{
    Triangle a;
    printf("Enter the base of the triangle : \n");
    scanf("%f",&a.base);
    printf("Enter the altitude of the triangle : \n");
    scanf("%f",&a.altitude);
    return a;
}
void input_n_triangles(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i]= input_triangle();
    }
}
void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
        t[i].area=0.5*t[i].base*t[i].altitude;
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest=t[0];
    for(int i=0;i<n;i++)
    {
        if(smallest.area<=t[i].area)
        {
            continue;
        }
        else
        {
            smallest=t[i];
        }
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest triangle out of triangles with the triangle having base %f, altitude %f and area %f \n",smallest.base,smallest.altitude,smallest.area);
}