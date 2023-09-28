#include<stdio.h>
int main()
{
    int num,first_digit,last_digit,sum=0;
    printf("enter number");
    scanf("%d",&num);
   printf("number is %d",num);
   last_digit=num%10;
   
   
   
    while(num>=10)
    {
        num=num/10;
    }
    first_digit=num;
    sum=first_digit-last_digit;
    
    printf("\n %d is sum of %d and %d",sum,first_digit,last_digit);
    
    return 0;
}
/* 123%10=3
123>10 
12>10
1.2>10 
1
1-3=-21


*/
