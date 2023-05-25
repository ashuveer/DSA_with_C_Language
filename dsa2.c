// Implemention of insersation operation wher we add data at the end of the array 
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
 main()
{
    int LA[]={1,3,5,7,8};
    int item=10,k=3,n=5;
    int i=0,j=n;
    printf("The original array elements befor  insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);
    }
    n=n+1;
    while(j>=k)
    {
        LA[j+1]=LA[i];
        j=j-1;
    }
    LA[k]=item;
    printf("The array element after insertion :\n");
    for(i=0;i<n;i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);

    }
    
}