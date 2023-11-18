#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int num1,den1,num2,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the num1 : \n");
    scanf("%d",num1);
    printf("Enter the den1 : \n");
    scanf("%d",den1);
    printf("Enter the num2 : \n");
    scanf("%d",num2);
    printf("Enter the den2 : \n");
    scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num=(num1*den2)+(num2*den1);
    *res_den=den1*den2;
    if(*res_num>*res_den)
    {
        for(int i=1;i<=*res_den;i++)
        {
            if(*res_num%i==0&&*res_den%i==0)
            {
                *res_num=*res_num/i;
                *res_den=*res_den/i;
            }
        }
    }
    else
    {
        for(int i=1;i<=*res_num;i++)
        {
            if(*res_num%i==0&&*res_den%i==0)
            {
                *res_num=*res_num/i;
                *res_den=*res_den/i;
            }
        }
    }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}