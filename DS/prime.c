#include<stdio.h>

int main()
{
	int a;
	printf("enter the numbers:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is prime number",a);
	}
	else
	{
		printf("%d is not a prime number",a);
	}
	return 0;
}

