#include <stdio.h>

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    int n;
    Complex a,b,result;
    n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    result=add_n_complex(n,c);
    output(n,c,result);
    return 0;
}
int get_n()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    return n;
}
void input_n_complex(int n, Complex c[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the real number : \n");
        scanf("%f",&c[i].real);
        printf("Enter the complex number : \n");
        scanf("%f",&c[i].imaginary);
    }
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex x={0,0};
    for(int i=0;i<n;i++)
    {
        x.real=c[i].real+x.real;
        x.imaginary=c[i].imaginary+x.imaginary;
    }
    return x;
}
void output(int n, Complex c[n], Complex result)
{
    printf("The sum of %d complex number ",n);
    for(int i=0;i<n;i++)
    {
        printf("%f + %fi ",c[i].real,c[i].imaginary);
    }
    printf("is : %f +%fi",result.real,result.imaginary);
}