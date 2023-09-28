#include<stdio.h>
int main()
{
    int n1=0,n2=1,next=n1+n2,i,n;
    printf("enter  number");
    scanf("%d",&n);
    printf("%d \t %d",n1,n2);
    for(i=1;i<=n;i++)
    {
        printf("\t%d",next);
        n1=n2;
        n2=next;
        next=n1+n2;
    }
   
    return 0;
}