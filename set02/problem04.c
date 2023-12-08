#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int b);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
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
        printf("Enter the array a[%d] \n",i);
        scanf("%d",&a[i]);
    }
}
int is_composite(int b)
{
    for(int i=2;i*i<=b;i++)
    {
        if(b%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=is_composite(a[i]);
        if(x==0)
        {
            sum+=a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("The sum of composite number is %d \n",sum);
}
