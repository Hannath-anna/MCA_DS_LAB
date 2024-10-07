#include<stdio.h>
int main()
{
  int a[10],n,i,j,sum=0;
	printf("how many numbers u want..  ");
  		scanf("%d",&n);
  
	for(i=0;i<=n-1;i++)
		{
 			scanf("%d",&a[i]);
		}
 	for(j=0;j<=n-1;j++)
		{ 
			sum=sum+a[j];
		}
	printf("sum = %d \n",sum);
  return(0);
}

