#include<stdio.h>
#include<string.h>

int main()
{
	int choice,max,i;
	
	do{
		
	char str1[100],str2[100], len1, len2, str[100], orginalStr, sub[100];
	printf("Main Menu :\n");
	printf("\t1.Equality\n");
	printf("\t2.String copy\n");
	printf("\t3.Concat\n");
	printf("\t4.Show\n");
	printf("\t5.Reverse\n");
	printf("\t6.Palindrome\n");
	printf("\t7.Sub String\n");
	printf("\t8.Exit\n");
	
	printf("Please Enter Your Choice :");
	scanf("%ds",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nPlease Enter Your first String :");
			scanf("%s",&str1);
			printf("\nPlease Enter Your second String :");
			scanf("%s",&str2);
			if(strcmp(str1,str2)==0){
				printf("The strings are equal.\n");
			}
			else{
				printf("The strings are not equal.\n");
			}
			break;
			
		case 2:
			printf("Please enter String to copy :");
			scanf("%s",&str1);
			strcpy(str2,str1);
			printf("string 1 is :%s\n",str1);
			printf("copied string is :%s\n",str2);
			break;
			
		case 3:
			printf("Please Enter First String:");
			scanf("%s",&str1);
			printf("Please Enter Second String:");
			scanf("%s",&str2);
			len1=strlen(str1);
			len2=strlen(str2);
			
			if(len1+len2< sizeof(str1)){
				strcat(str1,str2);
				printf("Concatenated string: %s\n",str1);
			}
			else
			{
				printf("Concatenation would exceed buffer size.\n");
			}
			break;
			
		case 4:
			printf("Please Enter the String :\n");
			scanf("%s",&str);
			printf("--The String you entered is :%s\n",str);
			break;
			
		case 5:
			printf("Please Enter the String :\n");
			scanf("%s",&str);
			strrev(str);
			printf("--The String after Reversing is :%s",str);
			break;
			
		case 6:
			printf("Please Enter the String :\n");
			scanf("%s",&str);
			printf("%s",strrev(str));
			orginalStr=str;
			if(str==orginalStr)
			{
				printf("\nPelindrom");
			}
			else
			{
				printf("\nNot pelindrom.");
			}
			break;
			
		case 7:
			printf("Please Enter a string: ");
			scanf("%s",&str);
			printf("Enter The sub string to be search :");
			scanf("%s",&sub);
			len1=strlen(str);
			len2=strlen(sub);
			max=len1-len2;
			
			if(i<=max)
			{
				printf("\n String Found at Index :%d",i);	
			}	
			else
			{
				printf("\n String not found.");
			}
			break;
			
		case 8:
			return 0;
			
        
        default:
        	printf("Invalid Choice please enter choice  from menu.");
        	break;
	}	
	
	printf("\nDo you want to continue <press 1 to continue.>");
	scanf("%d",&choice);
		
		
	} while(choice == 1);
	
	return 0;
}s
