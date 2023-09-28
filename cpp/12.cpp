//calc using function overloding.

#include<iostream>
using namespace std;
class calc{
	public:
		int A()
		{
			int a,b;
			cout<<"Enter Two values :"<<endl;
			cin>>a>>b;
			cout<<"Addition : "<<a+b<<endl;
		}
		int A(int a)
		{
			int b;
			cout<<"Enter value of b :"<<endl;
			cin>>b;
			cout<<"Subtraction : "<<a-b<<endl;
		}
		int A(int a,int b)
		{
			cout<<"Multiplication : "<<a*b<<endl;
		}
		int A(double a,double b)
		{
			cout<<"Division : "<<a/b<<endl;
		}
};
int main()
{
	calc obj;
	obj.A();
	obj.A(30);
	obj.A(60,2);
	obj.A(6.3,2.1);
	return 0;
}
