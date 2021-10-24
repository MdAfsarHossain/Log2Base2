#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int ara[], int n) {

    for(int i=0; i<n-1; i++) {
        int flag = 0;
        for(int j=0; j<n-i-1; j++) {
            if(ara[j] > ara[j+1]) {
                swap(ara[j], ara[j+1]);
                flag = 1;
            }
        }

        if(flag==0) {
            break;
        }
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

    bubbleSort(ara, n);

    return 0;
}
