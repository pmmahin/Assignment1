#include<stdio.h>
int main()
{
    int b,h,a;
    printf("enter the value for base");
    scanf("%d",&b);
     printf("enter the value for height");
    scanf("%d",&h);
    a=0.5*h*b;
    printf("%d is the area of triangle",a);
    
    return 0;
}