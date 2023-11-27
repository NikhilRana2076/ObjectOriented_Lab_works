#include<iostream>
using namespace std;
#define cube(x) (x*x*x)
 
int main()
{
    int n,cube;
    cout<<"Enter any positive number: ";
    cin>>n;
    cube=cube(n);
    cout<<endl<<"The cube of the number " <<n<< " is "<<cube;
    return 0;
}
