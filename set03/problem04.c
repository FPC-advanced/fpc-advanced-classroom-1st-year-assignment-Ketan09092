#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
	int n=input();
	int fib= find_fibo(n);
	output(n,fib);
}
int input()
{
	int a;
	printf("Enter the number : \n");
	scanf("%d",&a);
	return a;
}
int find_fibo(int n)
{
    int a[n];
	a[0]=0;
	a[1]=1;
	printf("%d \n",a[0]);
	printf("%d \n",a[1]);
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}
void output(int n, int fibo)
{
	printf("fibo(%d) = %d",n,fibo);
}