#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,v=0,i;
    cin>>n;
    int a[n];
    vector<int>low,high;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    x=a[1]-a[0];
    low.push_back(x);
    x=a[n-1]-a[0];
    high.push_back(x);
    for(i=1; i<n-1; i++)
    {
        x=min((a[i]-a[i-1]),(a[i+1]-a[i]));
        low.push_back(x);
        x=max((a[i]-a[0]),(a[n-1]-a[i]));
        high.push_back(x);
    }
    x=a[n-1]-a[n-2];
    low.push_back(x);
    x=a[n-1]-a[0];
    high.push_back(x);

    for(i=0; i<low.size(); i++)
    {
        cout << low[i] << " " << high[i]  <<endl;
    }
}

