#include<iostream>
using namespace std;

class String
{
	private:
	char n[20];
	char m[20];
	
	public:
	String(char n[20], char m[20])
	{
		copy(this->n,n);
		copy(this->m,m);
	}
	void rev(char (&rev)[20],char str[20])
	{
		int length;
		char literal[20];
		(str == "1")?copy(literal,"1"):(str=="2")?copy(literal,"2"):copy(literal,str);
		
		count(length,literal);
		for(int i=0;i<20;i++)
		{
			rev[i] = literal[length-1];
			if(literal[length-1] == 0)
			break;
			
			length--;
			
		}
	}
	
	void copy(char (&cpy)[20], char arg[20] = '\0')
	{
		char temp[20];
		if(arg == "1")
		{
			for(int i=0;i<20;i++)
			{
				temp[i] = n[i];
				if(n[i]=='\0')
				{
					temp[i] = '\0';
					break;
				}
			}
		}
		else if(arg == "2")
		{
			for(int i=0;i<20;i++)
			{
				temp[i] = m[i];
				if(m[i]=='\0')
				{
					temp[i] = '\0';
					break;
				}
			}
		}
		else
		{
			for(int i=0;i<20;i++)
			{
				temp[i] = arg[i];
				if(arg[i]=='\0')
				{
					temp[i] = '\0';
					break;
				}
			}
		}
		for(int i=0;i<20;i++)
		{
			cpy[i] = temp[i];
			if(temp[i]=='\0')
			{
				cpy[i] = '\0';
				break;
			}
		}
	}
	void concat(char str1[20], char str2[20], char (&reStr)[20])
	{
		int length1,length2;
		char literal1[20],literal2[20];
		(str1 == "1" && str2 == "2")?copy(literal1,"1"),copy(literal2,"2"):(str1 == "2" && str2 == "1")?copy(literal1,"2"),copy(literal2,"1"):copy(literal1,str1),copy(literal2,str2);
		count(length1,literal1);
		count(length2,literal2);
		for(int i=0,j=0;i<(length1+length2);i++)
		{
			if(i<length1)
			{
				
				reStr[i] = literal1[i];
				
			}
			else
			{
				reStr[i] = literal2[j];
				if(literal2[j] == '\0')
				{
					break;
				}
				j++;
			}
		}
	}
	void count(int &strcount, char info[20] = '\0')
	{
		char string[20];
		(info == "1")?copy(string,n):(info=="2")?copy(string,m):copy(string,info);
		while(1)
		{
			if(string[strcount] == '\0')
			{
				break;
			}
			(strcount)++;
		}
	}
};

int main()
{             
	int strcount;
	char copy[20],name1[50],name2[50];
	char concat[20];
	char reverse[20];
	cout<<"Enter first name:";
	cin>>name1;
	cout<<"Enter second name: ";
	cin>>name2;
	String name(name1,name2);
	
	cout<<endl;
	name.count(strcount,"2");
	cout<<"The length of string: "<<strcount<<endl;
	
	name.copy(copy,"1");
	cout<<"Copied String: "<<copy<<endl;
	
	name.concat("1","2",concat);
	cout<<"Concatenated String: "<<concat<<endl;
	
	name.rev(reverse,"1");
	cout<<"Reversed String: "<<reverse;
}

