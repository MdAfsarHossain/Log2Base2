#include<iostream>
#include<algorithm>
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

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ara[i] > ara[j])
            {
                swap(ara[i], ara[j]);
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
