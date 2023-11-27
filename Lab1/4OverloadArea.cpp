#include<iostream>

using namespace std;

float area(float r)
{
        return(3.14 * r * r);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}

int main()
{
        float b,h,r;
        int ch;

        do
        {
          
                cout<<endl<<" 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r)<<endl;
        
								break;
                                
                                 
								                         }
                        case 2:
                        {
                                cout<<"Enter the Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h)<<endl;
                                break;
                        }
                        case 3:
                        exit(0);
                        
						    default:
                                cout<<"\n Invalid Choice... ";
                }
        }
		while(ch!=4);
        return 0;
}
