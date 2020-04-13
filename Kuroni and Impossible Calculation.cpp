#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sam=1;
    cin>>n>>m;
    int a[n];
    if(n<=m)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                sam=(sam*abs(a[i]-a[j])%m);
            }
        }
        if(sam<0)
        {
            cout << "0\n";
        }
        else
            cout << sam%m <<endl;
    }
    else
    {
        cout << "0\n";
    }
}
