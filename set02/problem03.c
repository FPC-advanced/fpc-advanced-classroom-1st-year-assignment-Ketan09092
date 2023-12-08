#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}
int input_number()
{
    int x;
    printf("Enter the number : \n");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    int x=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void output(int n, int result)
{
    if(result==0)
    {
        printf("The number %d is composite number \n",n);
    }
    else
    {
        printf("The number is not a  composite number \n");
    }
}