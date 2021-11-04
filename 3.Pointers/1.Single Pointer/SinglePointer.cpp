#include<iostream>
using namespace std;

int main()
{
  int a = 10;
  int *ptr = &a;
  cout<<"Value of a = "<<a<<endl;   //10
  cout<<"Value of &a = "<<&a<<endl; //address
  cout<<"Value of *ptr = "<<*ptr<<endl; //10
  cout<<"Value of ptr = "<<ptr<<endl;   //address
  cout<<"Value of &ptr = "<<&ptr<<endl; //address

  return 0;
}
