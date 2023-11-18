#include <stdio.h>

typedef struct fra
{
    int num,den;
}Fraction;


Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
    int a,b;
    Fraction f1,f2,sum;
    printf("Enter the fraction f1 : \n");
    f1=input_fraction();
    printf("Enter the fraction f2 : \n");
    f2=input_fraction();
    sum=add_fractions(f1,f2);
    output(f1,f2,sum);
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
    Fraction f3;
    f3.num=f1.num*f2.den + f2.num*f1.den;
    f3.den=f1.den*f2.den;
    int gcd=find_gcd(f3.num,f3.den);
    f3.num/=gcd;
    f3.den/=gcd;
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d \n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}