#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("enter the numbers:");
	scanf("%d,%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the numbers after swapping a = %d and b = %d:",a,b);
	return 0;
}
