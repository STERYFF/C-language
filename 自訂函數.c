#include<stdio.h>

int Max(int a,int b);
int Min(int v,int s);
int Max3(int a,int b,int c);

int main()
{
	int M;
	int Mi; 
	int Ma3;
	int a,b,c;
	
	printf("叫块材计:");
	scanf("%d",&a);
	printf("叫块材计:");
	scanf("%d",&b);
	printf("叫块材计:");
	scanf("%d",&c);
	
	M=Max(a,b);
	Mi=Min(a,b);
	Ma3=Max3(a,b,c);
	
	printf("玡ㄢ计ゑ耕计琌:%d",M);
	printf("玡ㄢ计ゑ耕计琌:%d",Mi);
	printf("计い程计琌:%d",Ma3);

	return 0;
}

int Max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int Min(int v,int s)
{
	if(v>s)
		return s;
	else
		return v;
}

int Max3(int a,int b,int c)
{
	if(a>b)
	{
		if (c>a)
		{
			return c;
		}
		else
		{
			return a;
		}
	}
	if(b>a)
	{
		if(c>b)
		{
			return c;
		}
		else
		{
			return b;
		}
	}
}
