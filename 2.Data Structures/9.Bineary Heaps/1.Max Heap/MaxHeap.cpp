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

void buildHeap(int ara[], int n)
{
    for(int i=n/2; i>=0; i--)
        heapify(ara, i, n);
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

    buildHeap(ara, n);

    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    // 10 20 40 30 80 60 50
    // 80 30 60 10 20 40 50

    return 0;
}
