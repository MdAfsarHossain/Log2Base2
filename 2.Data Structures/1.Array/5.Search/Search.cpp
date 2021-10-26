#include<iostream>
using namespace std;

int searchKey(int ara[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(ara[i]==key)
        {
            return 1;
        }
    }
    return 0;
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

    int key;
    cin>>key;

    if(searchKey(ara, n, key))
    {
        cout<<"Found."<<endl;
    }
    else
    {
        cout<<"Not Found."<<endl;
    }
}
