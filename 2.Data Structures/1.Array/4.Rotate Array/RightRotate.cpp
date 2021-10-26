#include<iostream>
using namespace std;

void rightRotate(int ara[], int n, int k)
{
    int temp = ara[n-1];

    for(int i=n-1; i>0; i--)
    {
        ara[i] = ara[i-1];
    }
    ara[0] = temp;
}

void arrayRotate(int ara[], int n, int k)
{
    for(int i=0; i<k; i++)
    {
        rightRotate(ara, n, k);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    int k;
    cin>>k;

    //arrayRotate(ara, n, k);
    for(int i=0; i<k; i++)
    {
        rightRotate(ara, n, k);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
