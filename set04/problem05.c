#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int n;
    n=input_size();
    int a[n];
    input_array(n,a);
    int index=find_largest_index(n,a);
    output(index);
}
int input_size()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the array a[%d] \n",i);
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
    int c=a[0];
    for(int i=0;i<n;i++)
    {
        if(c<=a[i])
        {
            c=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(c==a[i])
        {
            return i;
            break;
        }
    }
}
void output(int index)
{
    printf("The index of the largest number in the array is %d \n",index);
}