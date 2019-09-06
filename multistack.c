#include<stdio.h>

static int top=-1,arr[10];

void push(int x);
void pop();
void display();

void main()
{
  int ch,choice,x;
  do
    {
      printf("\nMENU\n\n\n1.Push\n2.Pop\n3.Display\nEnter your choice:");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1: printf("\nEnter element to push:\n");
	  scanf("%d",&x);
	  push(x);
	  break;
	case 2: pop();
	  break;
	case 3: display();
	  break;
	default:printf("\nERROR\n");
	}
      printf("\nDo you want to continue(1|0):");
      scanf("%d",&choice);
    }while(choice);
}

void push(int x)
{
  if(top==-1)
    {
      top++;
      arr[top]=x;
      return;
    }
  if(top==10)
    {
      printf("\nSTACK OVERFLOW!!!\n");
      return;
    }
  top++;
  arr[top]=x;
}

void pop()
{
  if(top==-1)
    {
      printf("\nSTACK UNDERFLOW!!!\n");
      return;
    }
  printf("\nElement to be deleted: %d\n",(arr[top]));
  top--;
}

void display()
{
  if(top==-1)
    {
      printf("\nNo Elements Present\n");
      return;
    }
  for(int i=0;i<=top;i++)
    printf("%d\n",arr[i]);
}
	  
	
  
