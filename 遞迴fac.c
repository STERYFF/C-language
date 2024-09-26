#include<stdio.h>

int fac(int n);

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d¶¥=%d",a,fac(a));
	
	
	return 0;
}

int fac(int n)
{
	if (n==0||n==1)
		return 1;
	else if (n>=2)
		return n*fac(n-1);
}


