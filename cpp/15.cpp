//Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading

#include<iostream>
using namespace std;
class A{
	public:
		int area()
		{
			int l,b,a;  //l=length, b=breadth, a=area
			cout<<"Enter length of Rectengle : "<<endl;
			cin>>l;
			cout<<"Enter breadth of Rectengle : "<<endl;
			cin>>b;
			cout<<"Area of rectengle is : "<<l*b<<endl;
		}
		int area(int h,int b)  // h= height, b=base
		{
			cout<<"Area of Triangle is :"<<(h*b)/2<<endl;
		}
		int area(int r)  // r= radius
		{
			const int pi=3.14;
			cout<<"Area of Circle is : "<<pi*r*r<<endl; 
		}
		int area(float s)
		{
			cout<<"Area of Squre is :"<<s*s<<endl;
		}
};
int main()
{
	A obj;
	obj.area();
	//obj.area(20,4);
	//obj.area(6);
	obj.area(10);
	return 0;
}

