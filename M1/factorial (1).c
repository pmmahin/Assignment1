#include<stdio.h>
int main()
    {
    int i,no,fact=1;
    printf("enter the value for factorial");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    printf(" factorial for %d is %d",no,fact);
    return 0;
    }
   