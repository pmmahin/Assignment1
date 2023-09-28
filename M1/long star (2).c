#include<stdio.h>
int main()
{
 int i,j,row=10;
 for(i=1;i<row;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf("*");
     }
     printf("\n");
 }
 for(i=1;i<row;i++)
 {
     for(j=1;j<row-i;j++)
     {
         printf("*");
     }
     printf("\n");
 }

 return 0;   
}
