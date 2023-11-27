#include<iostream>
using namespace std;

int hra(int salary){
  if(salary<5000){return salary*0.05;}
  else if(salary >= 5000 && salary < 10000){return salary*0.10;}
  else if(salary >= 10000 && salary < 15000){return salary*0.15;}
  else{return salary*0.17;}
}

int da(int salary){
  if(salary<5000){return salary*0.02;}
  else if(salary >= 5000 && salary < 10000){return salary*0.05;}
  else if(salary >= 10000 && salary < 15000){return salary*0.08;}
  else{return salary*0.10;}
}

int main(){
  int salary;
  cout<<"Enter Salary: "; cin>>salary;
  cout<<"HRA: "<<hra(salary)<<endl;
  cout<<"DA: "<<da(salary)<<endl;
}
