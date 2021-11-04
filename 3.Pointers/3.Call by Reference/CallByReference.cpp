#include<iostream>
using namespace std;

void set(int *a)
{
    *a = 0;
    cout<<"Set : In set function a = "<<*a<<endl;   //0
}

int main()
{
    int a = 10;
    cout<<"Main : Before calling set function a = "<<a<<endl;   //10

    set(&a);

    cout<<"Main : After calling set function a = "<<a<<endl;    //0

    return 0;
}
