#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int element;
    cin>>element;

    int index;

    for(int i=0; i<n; i++)
    {
        if(ara[i]==element)
        {
            index = i;
        }
    }

    for(int i=index; i<n-1; i++)
    {
        ara[i] = ara[i+1];
    }
    n--;

    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
