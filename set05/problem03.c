#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);  //pass by value
//passing address variable
void output(Camel c);

int main()
{
    Camel c;
    c=input();
    find_weight(&c);
    output(c);
}
Camel input()
{
    Camel a;
    printf("Enter the radius of the camel: \n");
    scanf("%f",&a.radius);
    printf("Enter the height of the camel: \n");
    scanf("%f",&a.height);
    printf("Enter the length of the camel: \n");
    scanf("%f",&a.length);   
    return a;
}
void find_weight(Camel *c)
{
    float pi=3.14;
    float rad=pow(c->radius,3);
    c->weight = pi * rad * sqrt(c->height * c->length);
}
void output(Camel c)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f \n",c.radius,c.height,c.length,c.weight);
}