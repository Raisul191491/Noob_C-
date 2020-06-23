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
#define endl          '\n'
using namespace std;
int main()
{
    fast
    int n,k,x;
    cin>>n>>k;
    deque<int>pos;
    set<int>con;
    com(i,n)
    {
        int x;
        cin>>x;
        if(!con.count(x))
        {
            pos.push_front(x);
            con.insert(x);
            if (pos.size() > k)
            {
                con.erase(pos.back());
                pos.pop_back();
            }
        }
    }
    cout << pos.size() << "\n";
    for (int &e : pos)
        cout << e << ' ';
}
