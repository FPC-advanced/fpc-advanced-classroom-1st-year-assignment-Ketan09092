#include <stdio.h>
void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
void input(int *a, int *b, int *c)
{
    printf("Enter the value for a : \n");
    scanf("%d",a);
    printf("Enter the value for b : \n");
    scanf("%d",b);
    printf("Enter the value for c : \n");
    scanf("%d",c);
}
void compare(int a, int b, int c,int *largest)
{
    if(a>b&&a>c)
    {
        *largest=a;   
    }
    else if(b>c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of  %d,%d and %d is %d \n",a,b,c,largest);
}