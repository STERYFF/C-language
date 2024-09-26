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
	printf("請輸入正整數a(a>b):");
	scanf("%d",&a);
	printf("請輸入正整數b(a>b):");
	scanf("%d",&b);
	
	if (a>b)
	{
		printf("GCD(%d,%d)=%d\n",a,b,GCD(a,b));
	}
	else
	{
		printf("請確認a>b\n");
	}
	
	return 0;
}
