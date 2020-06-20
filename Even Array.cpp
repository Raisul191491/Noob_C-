#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,one=0,zer=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=i%2 && a[i]%2==1)
                one++;
            if(a[i]%2!=i%2 && a[i]%2==0)
                zer++;
        }
        if(one==zer)
            cout << one << endl;
        else
            cout << "-1\n";
    }
}
