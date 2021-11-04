#include<iostream>
using namespace std;

void heapify(int ara[], int index, int n)
{
    int left = 2 * index + 1;
    int right = left + 1;

    int max = index;

    if(left <= n && ara[left] > ara[max])
    {
        max = left;
    }
    if(right <= n && ara[right] > ara[max])
    {
        max = right;
    }

    if(index != max)
    {
        swap(ara[max], ara[index]);
        heapify(ara, max, n);
    }
}

void deleteMax(int ara[], int n)
{
    swap(ara[0], ara[n]);
    cout<<"Max : "<<ara[n]<<endl;
    n = n -1;
    heapify(ara, 0, n);
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

    deleteMax(ara, n);
    //deleteMax(ara, n-1);

    for(int i=0; i<n-1; i++)
    {
        cout<<ara[i]<<" ";
    }

    // 80 30 60 10 20 40 50
    // 60 30 50 10 20 40 -> 1st
    // 50 30 40 10 20 -> 2nd

    return 0;
}
