#include<iostream>
using namespace std;
class addition
{
	public:
		addition(int a,int b)
		{
			cout<<"Addition :"<<a+b<<endl;
		}
};
class subtraction
{
	public:
		subtraction(int a,int b)
		{
			cout<<"Subtraction :"<<a-b<<endl;
		}
};
class multiplication
{
	public:
		multiplication(int a,int b)
		{
			cout<<"Multiplication :"<<a*b<<endl;
		}
};
class division
{
	public:
		division(int a,int b)
		{
			if(b == 0)
			{
				cout<<"0 is not divisible.";
			}
			else
			{
				cout<<"Divison :"<<a/b<<endl;
			}
		}
};
int main()
{
	int a1,b1,ch;
	cout<<"Enter two values :"<<endl;
	cin>>a1>>b1;
	
		
	cout<<"Enter Choice :"<<endl;
	cin>>ch;
	
	if(ch==1)
	{
		addition a(a1,b1);
	}
	else if(ch==2)
	{
		subtraction b(a1,b1);
	}
	else if(ch==3)
	{
		multiplication c(a1,b1);
	}
	else if(ch==4)
	{
		division d(a1,b1);
	}
	else
	{
		cout<<"Enter valid Choice.";
	}
	return 0;
}

