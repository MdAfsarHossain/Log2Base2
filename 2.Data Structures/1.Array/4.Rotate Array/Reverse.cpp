#include<iostream>
using namespace std;

void reverse(int ara[], int start, int end)
{
    while(start < end)
    {
        int temp = ara[start];
        ara[start++] = ara[end];
        ara[end--] = temp;
    }
}

void arrayRotate(int ara[], int n, int k)
{
    reverse(ara, 0, n-k-1);
    reverse(ara, n-k, n-1);
    reverse(ara, 0, n-1);

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

    arrayRotate(ara, n, k);

    return 0;
}
