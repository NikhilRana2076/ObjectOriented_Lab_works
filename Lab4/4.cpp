#include<iostream>
using namespace std;

class Interest
{
	int Principal,time;
	float rate,total,si;
	
	public:
	Interest()
	{
		
	}
	Interest(int Principal, int rate, int time)
	{
		this->Principal = Principal;
		this->rate = rate;
		this->time = time;
		si = Principal * rate * time / 100;	
	}
	void Calc()
	{
		total = Principal + si;
	}
	void Disp()
	{
		cout<<"Principal: "<<Principal<<endl;
		cout<<"Rate: "<<rate<<endl;
		cout<<"Time: "<<time<<endl;
		cout<<"Simple Interest: "<<si<<endl;
		cout<<"Total amount: "<<total<<endl<<endl;	
	}
	~Interest()
	{
		
	}
};

int main()
{
	Interest j(100000,3,1),k(500000,5,1),l(600000,6,1);
	j.Calc();
	k.Calc();
	l.Calc();
	
	j.Disp();
	k.Disp();
	l.Disp();
}
