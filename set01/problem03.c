#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
int input()
{
    int a;
    printf("Enter the value : \n");
    scanf("%d",&a);
    return a;
}
int add(int x, int y)
{
    int sum=x+y;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n",a,b,sum);
}