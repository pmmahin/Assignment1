// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class matrix
{
	int num[3],i;
	public:
		void get()
		{
			for(i=0;i<3;i++)
			{
				cin>>num[i];
			}
		}
		void display()
		{
			for(i=0;i<3;i++)
			{
				cout<<num[i];
			}
		}
		void operator +(matrix object)
		{
			matrix array;
			for(i=0;i<3;i++)
			{
				array.num[i]=num[i]+ object.num[i];
			}
			cout<<"result array is"<<endl;
			for(i=0;i<3;i++)
			{
				cout<<array.num[i]<<"\t";
			}
		}
};
int main()
{
	matrix obj1,obj2;
	cout<<"Enter 3 values for first array";
	obj1.get();
	cout<<"Enter 3 values for second array";
	obj2.get();
	obj1+obj2;
	return 0;
}
