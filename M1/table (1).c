#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the number to print table");
        scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
    printf("%d*%d=%d \n",number,i,number*i);
        ;
    }
    
    return 0;
}