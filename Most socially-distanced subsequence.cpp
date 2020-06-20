#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x=1,con=0,pon=0;
        cin>>n;
        int a[n+1];
        vector<int>pos;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        pos.push_back(1);
        for(int i=1; i<=n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                x=i;
                while(a[x]<a[x+1] && x<=n-1) {
                    x++;
                }
                pos.push_back(x);
                i=x-1;
            }
            else
            {
                x=i;
                while(a[x]>a[x+1] && x<=n-1) {
                    x++;
                }
                pos.push_back(x);
                i=x-1;
            }
        }
        cout << pos.size() << endl;
        for(int i=0; i<pos.size(); i++)
        {
            cout << a[pos[i]] << " ";
        }
        cout << endl;
    }
}

