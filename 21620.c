#include<math.h>
#include<stdio.h>

float distance(int x1,int y1,int x2,int y2);

int main()
{
	int x1,y1,x2,y2;
	float A;
	printf("�п�J�Ĥ@��X�y��:");
	scanf("%d",&x1);
	printf("�п�J�Ĥ@��Y�y��:");
	scanf("%d",&y1);
	printf("�п�J�ĤG��X�y��:");
	scanf("%d",&x2);
	printf("�п�J�ĤG��Y�y��:");
	scanf("%d",&y2);
	
	
	A=distance(x1,y1,x2,y2);
	printf("A(%d,%d) B(%d,%d)���I�Z��=%.2f",x1,y1,x2,y2,A);
	
	return 0;
	
}

float distance(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
