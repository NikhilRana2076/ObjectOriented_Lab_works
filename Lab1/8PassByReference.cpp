#include<iostream>
#include<iomanip>

using namespace std;
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
 int main()
 {
 	int m=10, n=20;
 	cout<<"Before swap: m="<<m<<", n="<<n<<endl;
    swap(m,n);
    cout<<"After swap:  m="<<m<<", n="<<n<<endl;
 }
