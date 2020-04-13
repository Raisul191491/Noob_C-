#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    bool a[m+2];
    for(int i=1; i<=m; i++)
        a[i]=false;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        for(int k=0; k<j; k++)
        {
            cin>>x;
            a[x]=true;
        }
    }
    for(int i=1; i<=m; i++)
    {
        if(a[i]==false)
        {
            cout<< "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

}
