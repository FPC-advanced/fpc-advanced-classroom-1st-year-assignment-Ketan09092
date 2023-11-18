#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int a=input_number();
    int result=is_composite(a);
    output(a,result);
}
int input_number()
{
    int c;
    printf("Enter the number : \n");
    scanf("%d",&c);
    return c;
}
int is_composite(int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    return a;
}
void output(int n, int result)
{
    if(result>2)
    {
        printf("The number is a composite number \n");
    }
    else if(result==2)
    {
        printf("The number is not a composite number \n");
    }
    else
    {
        printf("The result is neither composite nor prime number \n");
    }
}