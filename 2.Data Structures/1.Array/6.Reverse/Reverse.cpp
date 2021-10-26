#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void reverse_words(string s)
{
    int l = s.length();
    cout<<l<<endl;

    int wstart = 0;

    for(int i=0; i<l; i++)
    {
        if(s[i]==' ')
        {
            //reverse(s.begin(), s.end()-1);
            reverse(s, wstart, i-1);
            //swap(s[i], s[i - 1]);
            wstart = i + 1;
        }
    }
    reverse(s, wstart, l-1);
    //reverse(s.begin(), s.end()-1);
    //swap(s[wstart], s[l-1]);
    cout<<s<<endl;
}

int main()
{
    //char str[10000];
    string s;

    getline(cin, s);
    cout<<s<<endl;

    reverse_words(s);

    return 0;
}
