#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,m,cnt=0;
        cin>>n>>b>>m;
        float sta=0,x,con;
        con=b;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            int pos=ceil((x+1)/con);
            if(pos!=sta)
            {
                 cnt++;
                 sta=pos;
            }
        }
        cout << cnt << endl;
    }
}
