#include<iostream>
using namespace std;

void rmDuplicate(int ara[], int n)
{
    if(n==0 || n==1)
    {
        cout<<n<<endl;
    }
    int len=0;

    for(int i=0; i<n-1; i++)
    {
        if(ara[i] != ara[i+1])
            ara[len++] = ara[i];
    }
    ara[len++] = ara[n-1];

    cout<<len<<endl;
    for(int i=0; i<len; i++)
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

    rmDuplicate(ara, n);
}
