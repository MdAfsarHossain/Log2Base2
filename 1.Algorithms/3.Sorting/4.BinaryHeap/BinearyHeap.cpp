#include<iostream>
#include<algorithm>
using namespace std;

void heapify(int ara[], int index, int size)
{
    int left = index * 2 + 1;
    int right = left + 1;

    int max = index;

    if(left<=size && ara[left] > ara[max])
    {
        max = left;
    }

    if(right<=size && ara[right] > ara[max])
    {
        max = right;
    }

    if(index!=max)
    {
        swap(ara[max], ara[index]);
        heapify(ara, max, size);
    }
}

void buildHeap(int ara[], int size)
{
    for(int i=size/2; i>=0; i--)
    {
        heapify(ara, i, size);
    }

    for(int i=0; i<size; i++)
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

    buildHeap(ara, n);

    return 0;
}
