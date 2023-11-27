#include <iostream>
using namespace std;
float area(float r)// cirlce
{
	return (3.14 * r * r);
}
float area(float b, float h)// triangle
{
	return (0.5 * b * h);
}
int area(int a)// square
{
  return a*a;
}
int area(int w, int b)// rectange
{
  return (w * b);
}
int main(){
  system("clear");
  int choice;
  cout << "*************** M E N U ***************" << endl;
  cout << "Press 0 to calculate the area of Cirlce" << endl <<
  "Press 1 to calculate the area of Square" << endl <<
  "Press 2 to calculate the area of Rectangle" << endl <<
  "Press 3 to calculate the area of Triangle" << endl <<
  "Press 4 to exit the program" << endl<<endl;
  while (choice != 4)
  {
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 0)
    {
      float rad;
      cout << "Enter Radius: ";
      cin >> rad;
      cout << "The area of circle: "<< area(rad) << endl <<endl;
    }
    else if(choice == 1)
    {
      int sd;
      cout << "Enter a side of Square: ";
      cin>>sd;
      cout<< "The area of Square is: " << area(sd) << endl<<endl;
    }
    else if(choice == 2)
    {
      int width, breadth;
      cout << "Enter widht and breadth of Rectangle: ";
      cin >> width >> breadth;
      cout << "The area of Rectangle is: " << area(width, breadth) << endl<<endl;
    }
    else if(choice == 3)
    {
      float base, height;
      cout << "Enter base and height of Triangle: ";
      cin >> base >> height;
      cout << "The area of Triangle is: " << area(base, height) << endl<<endl;
    }
    else if(choice == 4)
    {
      cout << "The Program is Terminated !!"<<endl;
      exit(0);
    }
    else{
      cout << "Enter Valid Number from 0 to 4" << endl<<endl;
    }
  }
}
