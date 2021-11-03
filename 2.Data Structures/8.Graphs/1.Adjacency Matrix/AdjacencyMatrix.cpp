#include<iostream>
#define ll long long int
using namespace std;

ll n, m, ara[1000][1000];

void init(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ara[i][j] = 0;
        }
    }
}

void printAdjacency(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
}

void addEdge(int src, int dest)
{
    ara[src][dest] = 1;
}

void removeEdge(int src, int dest)
{
    ara[src][dest] = 0;
}

int hasEdge(int src, int dest)
{
    if(ara[src][dest] == 1)
        return 1;

    return 0;
}

int main()
{
    cin>>n;

    init(n);

    printAdjacency(n);

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    cout<<endl;
    printAdjacency(n);

    removeEdge(1, 3);
    removeEdge(1, 4);
    cout<<endl;
    printAdjacency(n);

    if(hasEdge(3,4))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
