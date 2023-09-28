#include<iostream>
using namespace std;
class calc{
	public:
		calc(int a,int b)
		{
			int sum,sub,mul,div;
			cout<<"Enter number one :"<<endl;
			cin>>a;
			cout<<"Enter number two/ :"<<endl;
			cin>>b;
			sum=a+b;
			cout<<"Addition :"<<sum<<endl;
			sub=a-b;
			cout<<"subtraction :"<<sub<<endl;
			mul=a*b;
			cout<<"multiplication :"<<mul<<endl;
			div=a/b;
			cout<<"division :"<<div<<endl;
		}
};
int main()
{
	int a,b;
	calc obj(a,b);
	return 0;
}

