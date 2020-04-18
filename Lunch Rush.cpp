#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,k,joy=0,x,y;
    cin>>n>>k;
    vector<pair<int,int>>time;
    com(i,n)
    {
        cin>>x>>y;
        time.push_back(make_pair(x,y));
    }
    if(time[0].second<=k)
        joy=time[0].first;
    else
    {
        x=time[0].first-(time[0].second-k);
        joy=x;
    }
    dom(i,time.size())
    {
        if(time[i].second<=k)
            joy=max(joy,time[i].first);
        else
        {
            x=time[i].first-(time[i].second-k);
            joy=max(joy,x);
        }

    }
    cout << joy << endl;
}
