#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int main()
{
    Fraction a,b,c;
    float res_num1,res_num2,res_num3;
    printf("Enter the num a.num: \n");
    scanf("%d",&a.num);
    printf("Enter the num a.den: \n");
    scanf("%d",&a.den);
    printf("Enter the num b.num: \n");
    scanf("%d",&b.num);
    printf("Enter the num b.den: \n");
    scanf("%d",&b.den);
    printf("Enter the num c.num: \n");
    scanf("%d",&c.num);
    printf("Enter the num c.den: \n");
    scanf("%d",&c.den);
    res_num1=(float)a.num/a.den;
    res_num2=(float)b.num/b.den;
    res_num3=(float)c.num/c.den;
    printf("%f \n",res_num1);
    printf("%f \n",res_num2);
    printf("%f \n",res_num3);
    if(res_num1<=res_num2&&res_num1<=res_num3)
    {
        printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",a.num,a.den,b.num,b.den,c.num,c.den,a.num,a.den);
    }
    else if(res_num2<=res_num3&&res_num2<=res_num1)
    {
        printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",a.num,a.den,b.num,b.den,c.num,c.den,b.num,b.den);
    }
    else
    {
        printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",a.num,a.den,b.num,b.den,c.num,c.den,c.num,c.den);
    }
    return 0;
}