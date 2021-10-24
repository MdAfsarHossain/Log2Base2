#include<iostream>
using namespace std;
int ans[10000];

int greedyCoin(int ara[], int size, int value)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        while(value>=ara[i])
        {
            value -=ara[i];
            ans[count] = ara[i];
            count++;
        }
        if(value==0)
            break;
    }

    for(int i=0; i<count; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return count;
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

    int value;
    cin>>value;

    cout<<greedyCoin(ara, n, value)<<endl;

    return 0;
}
