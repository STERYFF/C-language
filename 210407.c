#include<stdio.h>

int main()
{
	int a,i,j,b;
	
	scanf("%d",&a);
	
	for(j=1;j<=a;j++)
	{
		for(i=1;i<=a-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=j;i++)
		{
			printf("*");
		}
		for(b=1;b<=j-1;b++)
		{
			printf("*");
		}
		printf("\n");
		
	
	}
	
	return 0;
}
