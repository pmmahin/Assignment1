#include<stdio.h>
int main()
{
    int num,rem,large=0;
    printf("enter  number");
    scanf("%d",&num);
    int ori=num;
   while(num>0)
   {
        rem=num%10;
    if(rem>large)
    {
        large=rem;
    }
    num=num/10;
   }
    printf("%d is largest among %d",large,ori);
    return 0;
}
/*
 123
 123>0
     123%10=3
     3>0 l=3
     123/10=12
     
     12%10=2
     2>3 l=3
     12/10=1
     
     1%1=1
     1>3 l=3
     0
*/
