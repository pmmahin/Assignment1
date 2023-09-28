//bank account.

#include<iostream>
using namespace std;
class bank{
	string name,acc_type;
	int acc_no;
	float balance,dp_amt,wt_amt;
	
	public:
		void get_values()
		{
			cout<<"Enter name of customer :"<<endl;
			cin>>name;
			cout<<"Enter account number :"<<endl;
			cin>>acc_no;
			cout<<"Enter account type :"<<endl;
			cin>>acc_type;
			cout<<"Enter Balance in the account :"<<endl;
			cin>>balance;
		}
		
		float deposite()
		{
			cout<<"Enter Deposite amount :"<<endl;
			cin>>dp_amt;
			balance=dp_amt+balance;
			return balance;
		}
		
		float withdraw()
		{
			cout<<"Enter Withdrawal amount :"<<endl;
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"not sufficient balance."<<endl;
			}
			else
			{
				
				balance=balance-wt_amt;
				return balance;
			}
		}
		
		void display()
		{
			cout<<"Customer Name is :"<<name<<endl;
			cout<<"Your total Balance is :"<<balance;
		}
};
int main()
{
	bank b;
	b.get_values();
	cout<<"After Deposite of amount Balance is :"<<b.deposite()<<endl;
	cout<<"After Withdraw of amount Balance is :"<<b.withdraw()<<endl;
	b.display();
	return 0;
}
