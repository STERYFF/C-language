#include<stdio.h>

int fib(int n);

int main()
{
	int n,i;
	printf("n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d��=%d\n",i,fib(i));
	}
	
	return 0;
}

int fib (int n)
{
	if (n==1||n==2)
		return 1;
	else if (n>=3)
		return fib(n-1)+fib(n-2);
}
