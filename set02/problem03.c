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
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    return x;
}
void output(int n, int result)
{
    if(result>2)
    {
        printf("The number %d is composite number \n",n);
    }
    else if(result==2)
    {
        printf("The number %d is prime number \n",n);
    }
    else
    {
        printf("The number you gave is neither prime nor composite \n");
    }
}