#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int ara[n+1], i;

    ara[0] = 0;
    ara[1] = 1;

    cout<<ara[0]<<" "<<ara[1]<<" ";

    for(i=2; i<=n; i++) {
        ara[i] = ara[i-1] + ara[i-2];
        cout<<ara[i]<<" ";
    }


}

int main()
{
    int n;
    cin>>n;

    if(n<=1) {
        cout<<n<<endl;
    } else {
        fibonacci(n);
    }
}
