#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius of the camel: \n");
    scanf("%f",radius);
    printf("Enter the height of the camel: \n");
    scanf("%f",height);
    printf("Enter the length of the camel: \n");
    scanf("%f",length);    
}
float find_weight(float radius, float height, float length)
{
    float rad=pow(radius,3);
    float pi=3.1415;
    float weight=pi * rad * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f \n",radius,height,length,weight);
}