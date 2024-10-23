#include<stdio.h> //include header
#include<stdlib.h>
#define SIZE 10
int front = -1,arr[SIZE];
int rear = -1,arr[SIZE];
// function declaration 
void nQuee();

void dQuee();

void traversal();

int main() // main function - landing function
{
   	int choice;
	do
	{
		printf("\n 1.nQuee \n 2.dQuee \n 3.traversal \n 4.Exit \n");
		printf("\n \n please select your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				nQuee(); //function calling	
				break;
			case 2:
				dQuee();
				break;
			case 3:
				traversal();
				break;
			case 4:
				break;
			default:
				printf("invalid choice..,");
				break;
		}
	}while(choice != 4);
	return(0);
}
//function definition

void nQuee()
{	
	int n , next;
	next = (rear % ( SIZE - 1)) + 1;
		
	if (front==-1 && rear==-1)

	{
		printf("\n add your element : ");
		scanf("%d",&n);
		front=0;
		rear=0;
		arr[rear]=n;

	}

	else if (next != front)

	{
     		printf("\n add your element : ");
     		scanf("%d",&n);	
		rear=next;
		arr[rear]=n;
	}

	else 
	{
		printf("\n circular quee is full");
	}	
}


void dQuee()

{
 	int item;
     
	if (rear==-1 && front==-1)

	{

		printf("\n Quee under flw");

	}

	else if (rear==front)

	{

		printf("\n deleted element : %d",arr[front]);
		front=-1;
		rear=-1;

	}

	else

	{	
		item=arr[front];
		front=(front%(SIZE-1))+1;
		printf("\n deleted element : %d",item);
		 
	}
}

void traversal()

{
int i;
        if (rear==-1 && front==-1)
     	{
	
		printf("\n under flw");

	}

	else

	{
		printf("\n element in this Quee :");
		for(i=front;i<=rear;i++)
		printf("  %d  ",arr[i]);
	}

}




