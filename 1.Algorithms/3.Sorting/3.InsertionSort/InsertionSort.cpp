#include<iostream>
using namespace std;

void insertionSort(int ara[], int n)
{
    int value, index;
    for(int i=1; i<n; i++) {
            value = ara[i];
            index = i;

            while(index>0 && ara[index-1] > value) {
                ara[index] = ara[index-1];
                index--;
            }

            ara[index] = value;
    }

    for(int i=0; i<n; i++) {
        cout<<ara[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int ara[n+1];
    for(int i=0; i<n; i++) {
        cin>>ara[i];
    }

    insertionSort(ara, n);

    return 0;
}
