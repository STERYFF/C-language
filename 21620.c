#include<math.h>
#include<stdio.h>

float distance(int x1,int y1,int x2,int y2);

int main()
{
	int x1,y1,x2,y2;
	float A;
	printf("請輸入第一個X座標:");
	scanf("%d",&x1);
	printf("請輸入第一個Y座標:");
	scanf("%d",&y1);
	printf("請輸入第二個X座標:");
	scanf("%d",&x2);
	printf("請輸入第二個Y座標:");
	scanf("%d",&y2);
	
	
	A=distance(x1,y1,x2,y2);
	printf("A(%d,%d) B(%d,%d)兩點距離=%.2f",x1,y1,x2,y2,A);
	
	return 0;
	
}

float distance(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
