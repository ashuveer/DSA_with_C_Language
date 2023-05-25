//Write a program, Tower of Hanoi.
//Written By: Mr. Ashutosh Kumar
#include<stdio.h>
void tower(int n,char S, char A,char D)
{
    if(n==1)
    {
        printf("\n Move disk %d from %c to %c",n,S,D);
    return;
    }
    tower(n-1,S,D,A);
    printf("\n Move disk %d from %c to %c",n,S,D);
    tower(n-1,A,S,D);
}
int main()
{
    int n;
    printf("Enter no. of disk \n");

    scanf("%d",&n);
    printf("The sequence of move tower of hanoi are:\n");
    tower(n,'S','A','D');
}