#include<stdio.h>

int main()
{
	int i,a,j;
	for(i=10;i<=1;i--)
	{
		printf("%d",i);
	}
	
	printf("\n=================\n");
	
	for(j=1;j<=9;j++)
	{
		for(i=1;i<=10;i++)
		{
			printf("%dX%d=%d\t",i,j,j*i);
		}
		printf("\n");
	}
}
