#include<stdio.h>

int i=0;

void H(int n,int a,int b,int c);

int main()
{
	int n;
	
	printf("�e����h��N=");
	scanf("%d",&n);
	H(n,1,2,3);
	printf("�h�F%d��",i);
	
	
	return 0;
}

void H(int n,int a,int b,int c)
{
	if (n==1)
	{
		printf("%d�h��%d\n",a,c);
		i++;
	}
	else
	{
		H(n-1,a,c,b);
		H(1,a,b,c);
		H(n-1,b,a,c);
	}
	
}
