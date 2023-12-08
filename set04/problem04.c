
#include <stdio.h>
#include <math.h>
int input();
void constant(int n,int a[n]);
int input_x();
int sum_constant(int x,int z,int a[z]);
void output(int sum);

int main()
{
    int z=input();
    int a[z],sum=0;
    constant(z,a);
    int x=input_x();
    sum=sum_constant(x,z,a);
    output(sum);
}
int input()
{
    int z;
    printf("Enter the value of : \n");
    scanf("%d",&z);
    return z;
}
void constant(int n,int a[n])
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("Enter the value %d : \n",i+1);
        scanf("%d",&a[i]);
    }
}
int input_x()
{
    int x;
    printf("Enter the value of x : \n");
    scanf("%d",&x);
    return x;
}
int sum_constant(int x,int z,int a[z])
{
    int sum=0;
    for(int i=0;i<=z;i++)
    {
        sum+=a[i]*pow(x,i);
    }
    return sum;
}
void output(int sum)
{
    printf("Sum is %d",sum);
}