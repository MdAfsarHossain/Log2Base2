#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    cout<<"Address of a = "<<&a<<endl;  //address
    cout<<"ptr is pointing to the address = "<<ptr<<endl;   //address
    cout<<"dptr is pointing to the address = "<<dptr<<endl; //address
    cout<<"Value of a = "<<a<<endl; //10
    cout<<"*ptr = "<<*ptr<<endl;    //10
    cout<<"**dptr = "<<**dptr<<endl;    //10

    return 0;
}
