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
	
	printf("�п�J�Ĥ@�ӼƦr:");
	scanf("%d",&a);
	printf("�п�J�ĤG�ӼƦr:");
	scanf("%d",&b);
	printf("�п�J�ĤT�ӼƦr:");
	scanf("%d",&c);
	
	M=Max(a,b);
	Mi=Min(a,b);
	Ma3=Max3(a,b,c);
	
	printf("�e��Ƥ���j���Ʀr�O:%d",M);
	printf("�e��Ƥ���p���Ʀr�O:%d",Mi);
	printf("�T�Ƥ��̤j���Ʀr�O:%d",Ma3);

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
