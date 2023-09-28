#include<iostream>
using namespace std;
class students{
	protected:
		int roll_number;
		public:
			void get_number()
			{
				cout<<"Enter  Roll no:"<<endl;
				cin>>roll_number;
			}
};
class test:public students{
	protected:
		int marks1,marks2;
		public:
			void get_marks()
			{
				cout<<"Enter marks 1 :"<<endl;
				cin>>marks1;
				cout<<"Enter marks 2 :"<<endl;
				cin>>marks2;
			}
};
class result:public test{
	protected:
		int total_marks;
		public:
			void sum()
			{
				total_marks=marks1+marks2;
				cout<<"Total marks is :"<<total_marks<<endl;
			}
};
int main()
{
	result obj;
	obj.get_number();
	obj.get_marks();
	obj.sum();
	return 0;
}
