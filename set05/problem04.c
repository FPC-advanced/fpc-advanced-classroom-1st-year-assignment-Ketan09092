#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    int mood = find_mood(radius,height,length);
    output(radius,length,height,mood);
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
int find_mood(float radius, float height, float length)
{
    if(radius < height && radius < length)
    {
        return 0;
    }
    else if(height < radius && height < length)
    {
        return 1;
    }
    else if(length < radius && length < height)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
void output(float radius, float height, float length, int mood)
{
    if(mood==0)
    {
        printf("Camel is sick \n");
    }
    else if(mood==1)
    {
        printf("Camel is Happy \n");
    }
    else if(mood=2)
    {
        printf("Camel is Tense \n");
    }
    else
    {
        printf("Camel mood cannot be found \n");
    }
}