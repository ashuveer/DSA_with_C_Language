//deletion operation 
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
 main()
{
    int LA[] = {1,3,5,7,8};
    int k=3,n=5;
    int i,j;
    printf("The original array element are: \n");
    for(i=0;i<n;i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);
       
    }
     j=k;

     while (j<n)
        {
        LA[j-1]=LA[j];
        j=j+1;
        n=n-1;
        printf("Th original array element after deletion are:\n");
        }
        for(i=0;i<n;i++)
        {
            printf("LA[%d]=%d\n",i,LA[i]);
        }
        

}