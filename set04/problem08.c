#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int n;
    n=input_n();
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction sum=add_n_fractions(n,f);
    output(n,f,sum);
}
int input_n()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction()
{
    Fraction a;
    printf("Enter the num : \n");
    scanf("%d",&a.num);
    printf("Enter the den : \n");
    scanf("%d",&a.den);
    return a;
}
void input_n_fractions(int n, Fraction f[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the Fraction f[%d] : \n",i);
        f[i]= input_fraction();
        while (f[i].den == 0) 
        {
            printf("Denominator cannot be zero. Please re-enter the fraction f[%d].\n", i);
            f[i] = input_fraction();
        }
    }
}
int find_gcd(int a, int b)
{
    for(int i=0;;i++)
    {
        int c= a%b;
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
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction f;
    f.num=f1.num*f2.den + f2.num*f1.den;
    f.den=f1.den*f2.den;
    int gcd=find_gcd(f.num,f.den);
    f.num/=gcd;
    f.den/=gcd;
    return f;
}
Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum;
    sum.num=f[0].num;
    sum.den=f[0].den;
    for(int i=1;i<n;i++)
    {
        sum=add_fractions(sum,f[i]);
    }
    return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
    printf("The sum is %d/%d",sum.num,sum.den);
}