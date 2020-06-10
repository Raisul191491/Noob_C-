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
    com(i,t)
    {
        double n,d;
        cin>>n>>d;
        if(d<=n)
            cout << "YES\n";
        else
        {
            int flag=0;
            dom(i,n-1)
            {
                double con=ceil(d/((double)i+(double)1));
                //cout << con << " ";
                if(i+(int)con<=n)
                {
                    cout << "YES\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout << "NO\n";
        }
    }
}
