#include<iostream>
using namespace std;
int main()
{
    int n1, n2, num, choice;
    while(1)
    {
	    cout<<"Press 1: GCD\nPress 2: LCM\nPress 3: Exit"<<endl<<endl;
	    cout<<"Enter your choice: ";
	    cin>>choice;
	    system("cls");
	    switch(choice)
	    {
	    	case 1:
	    	int n1,n2,max;
	    	cout<<"Enter two integer: ";
		    cin>>n1>>n2;
		    while(n1!=n2)
			{
		        if(n1 > n2)
		        {
		         num= n1 - n2;
		     	cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<num<<endl<<endl;
	    	break;
}
		        else{
		     				num= 	n2 - n1;
							cout<<"The GCD is "<<num<<endl<<endl;
	    	break;
				}
			}   	
	
	    	case 2:
	    	cout<<"Enter two integer: ";
		    cin>>n1>>n2;
		    
			max = (n1 > n2) ? n1 : n2;
		    while(1)
			{
		        if(max % n1 == 0 && max % n2 == 0)
				{
					cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<max<<endl<<endl;
		            break;
		        }
		        ++max;
		    }
	    	break;



	    	case 3:
	    	exit(0);
	    	
	    	default:
	    	break;
		}
	}	
	
    return 0;
}
