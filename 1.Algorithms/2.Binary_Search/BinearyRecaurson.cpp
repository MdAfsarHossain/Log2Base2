#include<iostream>
using namespace std;

int binearySearch(int ara[], int start, int end, int key) {
    int mid;

    if(start<=end) {
        mid = (start + end) / 2;

        if(ara[mid] == key) {
            return 1;
        }

        if(ara[mid]<key) {
            return binearySearch(ara, mid+1, end, key);
        } else {
            return binearySearch(ara, start, mid -1, key);
        }
    }

    return 0;
}

int main()
{
    int n;
    cin>>n;

    int ara[n+1];
    for(int i=0; i<n; i++) {
        cin>>ara[i];
    }

    int key;
    cin>>key;

    if(binearySearch(ara, 0, n-1, key) == 1) {
        cout<<key<<" is found."<<endl;
    }else {
        cout<<key<<" is not found."<<endl;
    }
}
