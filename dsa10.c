//Insertion sorting program 
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,temp;
    int A[100];
    printf("Size of array: ");
    scanf("%d",&n);
    printf("Enter element of an array:\n");
    for(j=0;j<n;j++)
    {
       scanf("%d",&A[j]);
    }
    printf("Entered Element is : \n");
    for(j=0;j<n;j++)
    {
        printf("%d \t",A[j]);
    }
    printf("\nWelcome in Insertion Sorting Program\n");
    printf("\t[Ascending Order]\n");
    for(j=0;j<n;j++)
    {
        temp=A[j];
        i=j-1;
    
    while((i>=0)&&(A[i]>temp))
    {
        A[i+1]=A[i];
        i=i-1;
    }
    
        A[i+1]=temp;
    }
    for(j=0;j<n;j++)
    {
      printf("%d\t",A[j]);
    }
    getch();
    return 0;
}