// 7) Write a program to create banking application to perform following using using class and
// object?
// a) Initialize with initial balance Rs 3000
// b) Deposit amount if balance is more than 1000 otherwise take Rs 100 as penalty for
// deposit
// c) Withdraw amount if balance is more than 1000 otherwise alert user for low balance
// d) check for balance

#include<iostream>
using namespace std;
class Opt{
	public:
		int bal=3000;
		void balance()
		{
			cout<<"Your current balance is Rs. "<<bal<<endl;
		}
		void deposit()
		{
			if(bal<=1000)
			{
				cout<<"Due to lower balance,you have to pay Rs. 100 as penalty..."<<endl;
			}
			else
			{
				int dep;
			 	cout<<"Enter the amount you want to deposit:";
				cin>>dep;
				bal=bal+dep;
				cout<<"Rs. "<<dep<<" Successfully deposited."<<endl;
			}	
		}
		void withdraw()
		{
			if(bal<=1000)
			{
				cout<<"Alert!!! Low balance....."<<endl;
			}
			else
			{
				int wid;
				cout<<"Enter the amount you want to withdraw:";
				cin>>wid;
				bal=bal-wid;
				cout<<"Rs. "<<wid<<" Successfully withdrawn."<<endl;	
			}	
		}	
};
int main()
{
	cout<<"Welcome to our Bank..."<<endl;
	Opt c;
	cout<<"1. Enter 1 to check balance"<<endl;
	cout<<"2. Enter 2 to deposit cash"<<endl;
	cout<<"3. Enter 3 to withdraw cash"<<endl;
	int a;
	string str;
	cout<<"Do you want to explore our features?(yes/no)";
	cin>>str;
	while(str=="Yes"||str=="yes")
	{
		cout<<"Do you want to continue?(Yes/No)"<<endl;
	    cin>>str;
	    if(str=="Yes"||str=="yes")
	    {
	    	cout<<"Enter your choice:";
	        cin>>a;
			switch(a)
			{
				case 1:
					c.balance();
					break;
				case 2:
					c.deposit();
					break;
				case 3:
					c.withdraw();
					break;
				default:
					cout<<"Extremely SORRY,may be there is some technical issue!!!! Try again later...."<<endl;
			}
	    }
	    else
	    {
	    	break;
		}
	}
	cout<<"Thank you for visiting us.... Have a nice day...."<<endl;
	return 0;
}
