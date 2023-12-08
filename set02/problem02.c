#include <stdio.h>
#include <math.h>

float input_side();
int check_scalene(float a, float b, float c);
void output(float a, float b, float c, int isscalene);

int main()
{
    float a,b,c;
    printf("Enter the side a : \n");
    a=input_side();
    printf("Enter the side b : \n");
    b=input_side();
    printf("Enter the side c : \n");
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
}
float input_side()
{
    float x;
    scanf("%f",&x);
    return x;
}
int check_scalene(float a, float b, float c)
{
    if(fabs(a-b) < 0.00001 || fabs(a-c) < 0.00001 || fabs(b-c) <0.00001)
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
void output(float a, float b, float c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle with sides %f, %f and %f is not scalene",a,b,c);
    }
    else
    {
        printf("The triangle with sides %f, %f and %f is scalene",a,b,c);
    }
}