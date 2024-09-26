#include<stdio.h>

int fac(int a);
int Comb(int a,int b);

int main()
{
	int n,f;
	int a,b,C;
	printf("請輸入n:");
	scanf("%d",&n);
	
	printf("請輸入a:");
	scanf("%d",&a);
	printf("請輸入b:");
	scanf("%d",&b);
	
	f=fac(n);
	C=Comb(a,b);
	
	printf("%d!=%d\n",n,f);
	printf("C%d取%d為:%d",a,b,C);
	
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
