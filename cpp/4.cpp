#include<iostream>
using namespace std;
class calc{
	float a,b;
	public:
		void result()
		{
			cout<<"Enter First number  :";
			cin>>a;
			cout<<"Enter Second number :";
			cin>>b;
		}
		
		int add()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int mul()
		{
			return a*b;
		}
		int div()
		{
			if(b == 0)
			{
				cout<<"Not possible"<<endl;
			}
			else
			{
				return a/b;
			}
		}
};
int main()
{
	int ch;
	calc C;
	cout<<"Enter 1 for Addition"<<
		  "\nEnter 2 for Subtraction."<<
		  "\nEnter 3 for Multiplication."<<
		  "\nEnter 4 for Division."<<
		  "\nEnter 0 for Exit.";
	do{
		cout<<"\nEnter Choice :";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				C.result();
				
				cout<<"Result :"<<C.add()<<endl;
				break;
				
			case 2:
				C.result();
				cout<<"Result :"<<C.sub();
				break;
				
			case 3:
				C.result();
				cout<<"Result :"<<C.mul();
				break;
				
			case 4:
				C.result();
				cout<<"Result :"<<C.div();
				break;	
		}	
	}while(ch >= 1 && ch<=4);
	return 0;
}

