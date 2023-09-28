#include<iostream>
using namespace std;

template <class T>
void meet(T num[],int n)

{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;i<j;j--)
		{
			if(num[j]<num[j-1])
			{
				swap(num[j],num[j-1]);
			}
		}
	}
}
int main()
{
	int m;
	int num[3] = {30,10,20};
	int n = sizeof(num)/sizeof(num[0]);
	cout<<endl<<"before sorted array ";
	for(m=0;m<n;m++)
	{
		cout<<num[m]<<" ";
	}
	meet<int>(num,n);
	cout<<endl<<"after sorted array ";
	for(m=0;m<n;m++)
	{
		cout<<num[m]<<" ";
	}
	cout<<endl;
	return 0;
}

