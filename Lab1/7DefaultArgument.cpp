#include<iostream>
#include<conio.h>
using namespace std;
void simple(int p, int t, int r=15);

int main();
{
 int p,t,r;
  cout<<"Enter principle amount: ";
  cin>>p;
  cout<<endl<<"Enter time in years: ";
  cin>>t;

  simple(p,t);
}


void simple(int p, int t, int r)
{
 float si;
 si= p*t*r/100; 
 
 cout<<endl<<"Simple Interest is :"<<si;
}

