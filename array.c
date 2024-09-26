#include<stdio.h>

int a[5];
int total=0,i,maxq,minq;

int main()
{
	for(i=0;i<5;i++)
	{
		printf("輸入第%d個數字:",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		total=total+a[i];
	}
	printf("\n%f",(float)total/5);
	
	int max=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxq=i+1;
		}
	}
	printf("\n最大值為%d",a[maxq-1]);
	printf("\n第%d個",maxq);

	int min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			minq=i+1;
		}
	}
	printf("\n最小值為%d",a[minq-1]);
	printf("\n第%d個",minq);
	
	
	return 0;
}
	
