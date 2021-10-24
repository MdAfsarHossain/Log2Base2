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

    int position, element;
    cin>>position>>element;

    for(int i=n; i>position; i--)
    {
        ara[i] = ara[i-1];
    }
    ara[position] = element;

    for(int i=0; i<=n; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
