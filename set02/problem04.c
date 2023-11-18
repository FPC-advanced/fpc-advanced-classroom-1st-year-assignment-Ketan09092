#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
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
int sum_composite_numbers(int n, int a[n])
{
    int sum=0,x=0;
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        for(int j=1;j<=c;j++)
        {
            if(a[i]%j==0)
            {
                sum = sum +a[i];
            }
            
    }
    return sum;
}
}
void output(int sum)
{
    printf("The sum of composite number is %d \n",sum);
}
