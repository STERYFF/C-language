#include<stdio.h>

int fac(int a);
int Comb(int a,int b);

int main()
{
	int n,f;
	int a,b,C;
	printf("�п�Jn:");
	scanf("%d",&n);
	
	printf("�п�Ja:");
	scanf("%d",&a);
	printf("�п�Jb:");
	scanf("%d",&b);
	
	f=fac(n);
	C=Comb(a,b);
	
	printf("%d!=%d\n",n,f);
	printf("C%d��%d��:%d",a,b,C);
	
	return 0;
}

int fac(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}

int Comb(int a,int b)
{
	int C; 
	C=fac(a)/fac(b)/fac(a-b);
	return C;
}
