//Write a program,push and pop operatio in stack.
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,imp_array[size];
void push();
void pop();
void show();
int main()
{
    int choice;
    while(1)
    {
        printf("\nOperation performed by stack");
        printf("\n1.Push the element\n2.The element\n3.Show the element");
        printf("\nEnter the choice=");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:show();
            break;
        case 4:exit;
            break;
        default:printf("\nInvalid choice");
        }
    }
    return 0;
}
void push()
{
    int x;
      if(top==size-1)
      {
        printf("\nover flow");
      }
      else
      {
        printf("\n Enter element to be inserted to the stack: ");
        scanf("%d",&x);
        top=top+1;
        imp_array[top]=x;
      }
}
void pop()
{
    if(top==-1)
    {
        printf("\nunder flow");
    }
    else
    {
        printf("\npopped element %d",imp_array[top]);
        top==top-1;
    }
}
void show()
{
    if(top==-1)
    {
        printf("\nunderflow");

    }
    else
    {
        printf("\n elements present in the stack:\n");
    for(int i=top;i>=0;--i)  
    printf("%d",imp_array[i]);
      }
}