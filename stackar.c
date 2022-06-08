#include<stdio.h>
#include<stdlib.h>
#define n 5

int top=-1;
int stack[n];

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void findtop()
{
	printf("\n Top position : %d",top);
	printf("\n Top value : %d",stack[top]);
}

void display()
{
	int i,x;
	x=top;
	printf("The elements are :\n");
	for(i=x;i>=0;i--)
	{	printf("%d\n",stack[i]);
	}
}

void push(int val)
{	if(isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d Pushed",stack[top]);
	}
}

void pop()
{
	if(isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d Popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}
void main()
{	while(1)
	{
		int option,entry;
		printf("\n\n\n STACK \n 1: PUSH \n 2: POP \n 3: DISPLAY \n 4: TO CHECK IF STACK FULL \n 5: TO CHECK IF STACK EMPTY \n 6: STACK TOP \n 7: EXIT \n\n ENTER CHOICE :");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			{
				printf("\n Enter element :");
				scanf("%d",&entry);
				push(entry);
				break;
			}
			
			case 2:
			{
				pop();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
			
			case 4:
			{
				if(isfull())
				{
					printf("Stack Full");
				}
				else
				{
					printf("Stack not Full");
				}
				break;
			}
			
			case 5:
			{
				if(isempty())
				{
					printf("Stack Empty");
				}
				else
				{
					printf("Stack Not Empty");
				}
				break;
			}
			
			case 6:
			{
				findtop();
				break;
			}
			
			case 7:
			{
				printf("Exiting");
				exit(0);
			}
			
			default :
			{
				printf("Wrong Option!!!");
				break;
			}
		}
	}
}
				
		
		
	
	




















			
	
	
	
	
	
	
	
	
		
