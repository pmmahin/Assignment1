#include<stdio.h>
int main ()
{
    char value;
    printf("enter the value");
    scanf("%c",&value);
    if (value=='a' || value=='e' || value=='i' || value=='o' || value=='u' || value=='A' || value=='E' || value=='I' || value=='O' || value=='U')
    {
        printf("vovel");
    }
    else{
        printf("consonent");
    }
    
    return 0;
}