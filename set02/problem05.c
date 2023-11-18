#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number : \n");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int c;
    for(int i=0;;i++)
    {
        c=a%b;
        if(c==0)
        {
            return b;
            break;
        }
        else
        {
            a=b;
            b=c;
        }
    }
}
void output(int a, int b, int gcd)
{
    printf("The HCF of %d and %d is %d \n",a,b,gcd);
}