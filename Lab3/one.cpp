#include<iostream>

using namespace std;
class Student{
private:
  int roll;
  string name;
  int marks[5];
  int total;
  float percentage;
public:
  void input();
  void display();
  void Calavg();
};
void Student::input()
{
  cout << "Enter your First Name: ";
  cin>>name;
  cout<<"Enter your roll number: ";
  cin >> roll;
  cout<<"Enter Grades in all five subjects: ";
  for (int i = 0; i < 5; i++) {
    cin>>marks[i];
  }
  cout<<endl;
}
void Student::Calavg(){
  total = 0;
  for(int i=0;i<5;i++){
      total=total + marks[i];
  }
  percentage = (float(total)/5);
}
void Student::display(){
  cout<<"Name: "<<name<<endl;
  cout<<"Roll No: "<<roll<<endl;
  cout<<"Total: "<<total<<endl;
  cout<<"percentage: "<<percentage<<endl;
}
int main()
{
  Student s[5];
  for (size_t i = 0; i < 5; i++) {
    s[i].input();
    s[i].Calavg();
  }
  system("CLS");
  for (size_t i = 0; i < 5; i++) {
    s[i].display();
    cout<<endl;
  }
}
