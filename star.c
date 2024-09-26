#include<stdio.h>

int main()
{
	int Max=5;
	int i,j;
	
	for(j=1;j<=Max;j++)
	{
		for(i=1;i<=Max-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
