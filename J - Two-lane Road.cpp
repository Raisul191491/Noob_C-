#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,y;
        cin>>n>>k>>d;
        vector<pair<int,int>>pos(n);
        com(i,n)
        {
            int x;
            cin>>x;
            pos[i].fr=x;
        }
        com(i,n)
        {
            int x;
            cin>>x;
            pos[i].sc=x;
        }
        sortvi(pos);
        int dis=k,con=0;
        for(int i=1; i<pos.size(); i++)
        {
            if(pos[i].sc!=pos[i-1].sc)
            {
                if(pos[i-1].fr+1==pos[i].fr || pos[i].fr<=con)
                {
                     dis=pos[i].fr;
                }
                else
                {
                     con=max(pos[i-1].fr+1,con);
                     con+=d;
                }
            }
            if(dis!=k)
               break;
        }
        cout << dis << endl;
    }
}


