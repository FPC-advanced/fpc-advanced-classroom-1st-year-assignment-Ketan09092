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
}
int input()
{
    int a;
    printf("Enter the number : \n");
    scanf("%d",&a);
    return a;
}
int find_gcd(int a, int b)
{
    int c;
    // while(b!=0)
    // {
    //     c=a%b;
    //     a=b;
    //     b=c;
    // }
    // return a;
    
    for(int i=0;;i++)
    {
        c=a%b;
        if(c==0)
        {
            return b;
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
    printf("Gcd is %d \n",gcd);
}