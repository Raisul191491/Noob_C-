#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    bool a[m];
    for(int i=1; i<=m; i++)
    {
        a[i]=true;
    }
    a[2]=true;
    a[3]=true;
    for(int i=2; i<=m; i++)
    {
        if(a[i]==true)
            for(int j=i*i; j<=m; j+=i)
            {
                a[j]=false;
            }
    }
    for(int i=n+1; i<m; i++)
    {
        if(a[i]==true)
        {
            cout << "NO" <<endl;
            return 0;
        }
        else
            continue;
    }
    if(a[m]==true)
    {
        cout << "YES" <<endl;
    }
    else
        cout << "NO" <<endl;
}
