#include<iostream>
using namespace std;

void sort(int sort[50], int n)
{
	int temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(sort[j] > sort[j+1])
			{
				temp = sort[j+1];
				sort[j+1] = sort[j];
				sort[j] = temp;
			}
		}
	}
}

int main()
{
	int array[50],num;
	cout<<"How many integer: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cout<<"Enter integer: ";
		cin>>array[i];
	}
	sort(array,num);
	cout<<"Sorted Array: ";
	for(int i=0;i<num;i++)
	{
		cout<<array[i]<<" ";
	}
}
