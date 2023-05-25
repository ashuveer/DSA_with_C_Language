//to solve the problem of tower of honoi
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
void tower(int n,char S,char A, char D)
{
    if(n==1)
    {
        printf("\nMove disk %d from %c to %c",n,S,D);
        return ;
    }
    tower(n-1,S,D,A);
    printf("\nMove disk %d from %c to %c",n,S,D);
    tower(n-1,A,S,D);
}
 main()
{ int n;
    printf("Enter no of disk\n");
    scanf("%d",&n);
    printf("The sequence of move tower of honoi are :\n");
    tower(n,'S','A','D');
}
