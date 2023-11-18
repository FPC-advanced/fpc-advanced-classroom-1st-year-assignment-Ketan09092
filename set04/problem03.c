#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,result;
    input_n_and_r(&n,&r);
    result=nCr(n,r);
    output(n,r,result);
    return 0;
}
void input_n_and_r(int *n, int *r)
{
    printf("Enter the value for n : \n");
    scanf("%d",n);
    printf("Enter the value for r : \n");
    scanf("%d",r);
}
int nCr(int n, int r)
{
    int a=1,b=1,c=1,i,j,k;
    for(i=1;i<=n;i++)
    {
        a=i*a;
    }
    for(j=1;j<=r;j++)
    {
       b=j*b; 
    }
    for(k=1;k<=n-r;k++)
    {
        c=c*k;
    }
    int d=b*c;
    int result=a/d;
    return result;
}
void output(int n, int r, int result)
{
    printf("for n = %d and r = %d, nCr = %d \n",n,r,result);
}