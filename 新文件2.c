#include<stdio.h>

int main()
{
	int Max=5;
	int i,j;
	
	for(i=1;i<=Max;i++)
	{
		printf("*");
	}
	
	printf("\n=================================\n");
	
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=Max;i++)
		{
			printf("*");
		}
		printf("\n");
	} 
	
	printf("\n=================================\n");
	
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n=================================\n");
	
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=Max-j+1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n=================================\n");
	
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=Max-j+1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
