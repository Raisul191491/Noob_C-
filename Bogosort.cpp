#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,con[105];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>con[i];
        sort(con,con+n,greater<int>());
        for(int i=0; i<n; i++)
            cout<<con[i]<<" ";
        cout<< "\n";
    }

    return 0;
}
