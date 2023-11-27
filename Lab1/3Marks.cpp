#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int m, it, dl, tot;
	float per;
	
	cout<<"Enter the marks obtained in maths: ";
	cin>>m;
	cout<<"Enter the marks obtained in IT: ";
	cin>>it;
	cout<<"Enter the marks obtained in DL: ";
	cin>>dl;
	system("cls");
	 
	cout<<endl<<"Subject"<<setw(16)<<"Marks";
	cout<<endl<<setw(25)<<setfill('-')<<'-'<<endl;
    cout<<"Maths "<<setfill(' ')<<setw(15)<<m<<endl;
    cout<<"IT    "<<setw(15)<<it<<endl;
    cout<<"DL    "<<setw(15)<<dl<<endl;
    	
    cout<<endl<<setw(25)<<setfill('-')<<'-'<<endl;
    tot= m+it+dl;
    per= ((float)tot/300)*100;

    cout<<endl<<"Total "<<setfill(' ')<<setw(15)<<tot<<endl;
    cout<<"Percentage "<<setw(9)<<per<<"%"<<endl;

}
