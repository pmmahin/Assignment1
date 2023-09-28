#include<stdio.h>
int main()
{
    int i,sum=0,end;
    
    printf("Enter the end point");
        scanf("%d",&end);
        printf("there are even number\n");
    for(i=1;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            sum=sum+i;
        }
        
    }
    printf("%d\n",sum);
    printf("these are odd numbers\n");
     for(i=1;i<=end;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            sum=sum+i;
        }
        
    }
    printf("%d",sum);
    
    
    return 0;
}