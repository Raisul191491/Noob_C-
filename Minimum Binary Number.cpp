#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0;
    cin>>n;
    string cor;
    cin>>cor;
    for(int i=0; i<n; i++)
    {
        if(cor[i]=='0')
            zero++;
    }
    if(n==1)
        cout<< cor;
    else
    {
         cout<< "1";
        for(int i=0; i<zero; i++)
        {
            cout<< "0";
        }
    }
}
