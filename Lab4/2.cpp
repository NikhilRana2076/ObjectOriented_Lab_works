#include<iostream>
using namespace std;

class matrix
{
	int row,col;
	int multi[50][50];
	
	public:
	int matrix[50][50];
	void read()
	{
		cout<<endl<<"Enter rows: ";
		cin>>row;
		cout<<"Enter columns: ";
		cin>>col;
		cout<<endl<<"For matrix: "<<endl;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<"Enter element a"<<i+1<<j+1<<": ";
				cin>>matrix[i][j];
			}
		}
		
	}
	void display()
	{
		cout<<endl<<endl<<"Display in Matrix format:"<<endl;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void multiply(int matrix[50][50])
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				multi[i][j] = 0;
				for(int k=0;k<col;k++)
				{
					multi[i][j] += this->matrix[i][k] * matrix[k][j];
				}				
			}
		}
		cout<<endl<<endl<<"Multiplication: "<<endl;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<multi[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
	matrix a,b;
	a.read();
	b.read();
	a.display();
	b.display();
	a.multiply(b.matrix);
}
