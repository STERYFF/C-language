#include<stdio.h>

int i=0;

void H(int n,int a,int b,int c);

int main()
{
	int n;
	
	printf("河內塔層數N=");
	scanf("%d",&n);
	H(n,1,2,3);
	printf("搬了%d次",i);
	
	
	return 0;
}

void H(int n,int a,int b,int c)
{
	if (n==1)
	{
		printf("%d搬到%d\n",a,c);
		i++;
	}
	else
	{
		H(n-1,a,c,b);
		H(1,a,b,c);
		H(n-1,b,a,c);
	}
	
}
