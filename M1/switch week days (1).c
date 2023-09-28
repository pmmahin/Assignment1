#include<stdio.h>
int main ()
{
    int day,choice;
    printf("menu");
   printf("\n enter 1 for monday \n enter 2 for tuesday \n enter 3 for wednesday \n enter 4 for thrusday\n enter 5 for friday \n enter 6 for saturday \n enter 7 for sunday ");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
       printf("monday");
       break;
       case 2:
       printf("tuesday");
       break;
       case 3:
       printf("wednesday");
       break;
       case 4:
       printf("thrusday");
       break;
       case 5:
       printf("friday");
       break;
       case 6:
       printf("saturday");
       break;
       case 7:
       printf("sunday");
       break;
       default:
       printf("invalid choice");
   }
   
    return 0;
}