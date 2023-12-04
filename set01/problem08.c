#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
}
int input_array_size()
{
    int x;
    printf("Enter the size of the array : \n");
    scanf("%d",&x);
    return x;
}
void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of the a[%d]",i);
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
void output(int n, int a[n],int sum)
{
    printf("%d",a[0]);
    for(int i=1;i<n;i++)
    {
        printf(" + %d",a[i]);
    }
    printf(" is %d \n",sum);
}