/*C code to implement stack using 2-d array
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
#include<stdlib.h>
int stack[5][5];
int x=0,y=-1;
void push(int);
int pop(void);
void display(void);
int main()
{
    int ch=-1,n,i;
    while(ch!=0)
    {
        printf("Enter your choice\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("0.EXIT\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            {
                printf("Enter number\n");
                scanf("%d",&n);
                push(n);
                break;
            }
            case 2:
            {
                i=pop();
                if(i==-1)
                    printf("Empty\n");
                else
                printf("Popped element is->>>> %d",i);
                break;
            }
            case 3: 
            {
                display();
                break;
            }
            case 4:
                break;
        }
    }
   return 0;
}
void push(int n)
{
    if(y==4)
    
    {
        x++;
        y=-1;
    }
    if(x==5)
        printf("Overflow\n");
    else
    {
    stack[x][++y]=n;
     
    }
}
int pop(void)
{
    if(x==0&&y==-1)
        return -1;
    else
    {
        int i=stack[x][y--];
        if(y==-1)
        {
            x--;
            y=4;
        }
        return i;
    }
}
void display(void)
{
    printf("x=%d y=%d\n",x,y);
    int i,j;
    if(x==0&&y==-1)
        printf("Empty\n");
    else
    for(i=0;i<=x;i++)
        {
            if(i==x)
        for(j=0;j<=y;j++)
            printf("%d ",stack[i][j]);
            else
                for(j=0;j<=4;j++)
                        printf("%d ",stack[i][j]);
        }
 
}