#include<iostream>
using namespace std;
class account{
	int acno, blnc, dep, wid;
	char accname[20];
	
	public:
		void createaccount()
		{
			cout << "Enter the name"<< endl;
			cin >> accname;
			cout << "Enter the account number" << endl;
			cin >> acno;
			cout<<"enter the open balance amount" << endl;
			cin >> blnc;
		}
       void deposit()
       {
       	cout << "ENter the amount you want to deposit" << endl;
       	cin >> dep;
       	blnc= blnc + dep;
	   }
       void withdraw()
       {
       	 cout << "Ente the amount oyu want to withdraw" << endl;
       	 cin >> wid;
       	 if (wid > blnc)
       	 {
       	 	cout << "Your balance is insufficient";
			}
			else 
			{
				blnc = blnc - wid;
			}
	   }
	   void inquiry()
	   {
	   cout << "Account no: "<<acno<<endl;
	   cout<<"Account name"<<accname<<endl;
	   if(wid > blnc)
	   {
	   	cout << "no money withdrawn";
		   }
		   else 
		   {
		   	cout << "Withdrawn amount is: " << wid << endl;	
			   }
			   cout << "deposited amount"<<dep<<endl;
			   cout << "Totale balance is "<<blnc;	
}
};
int main()
{
	account a1;
	a1.createaccount();
	a1.deposit();
	a1.withdraw();
	a1.inquiry();
	}
