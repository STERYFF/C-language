#include<stdio.h>

int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return GCD(b,a%b);
}

int main()
{
	int a,b;
	printf("�п�J�����a(a>b):");
	scanf("%d",&a);
	printf("�п�J�����b(a>b):");
	scanf("%d",&b);
	
	if (a>b)
	{
		printf("GCD(%d,%d)=%d\n",a,b,GCD(a,b));
	}
	else
	{
		printf("�нT�{a>b\n");
	}
	
	return 0;
}
