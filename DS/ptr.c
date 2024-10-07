#include<stdio.h>
int main()
{
	int num=20;
	int *ptr;
	ptr=&num;
	printf("the value of variable num is \n %d",num);
	*ptr=30;
	printf("\n the value of variable num through the pointer variable ptr is \n %d",*ptr);
	return 0;
}
	

