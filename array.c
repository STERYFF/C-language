#include<stdio.h>

int a[5];
int total=0,i,maxq,minq;

int main()
{
	for(i=0;i<5;i++)
	{
		printf("��J��%d�ӼƦr:",i+1);
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
	printf("\n�̤j�Ȭ�%d",a[maxq-1]);
	printf("\n��%d��",maxq);

	int min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			minq=i+1;
		}
	}
	printf("\n�̤p�Ȭ�%d",a[minq-1]);
	printf("\n��%d��",minq);
	
	
	return 0;
}
	
