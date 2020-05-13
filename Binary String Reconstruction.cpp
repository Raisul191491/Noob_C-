#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int a,b,c;
        string s="";
        cin>>a>>b>>c;
        if(b==0)
        {
            if(a==0)
            {
                com(i,c+1)
                {
                    s+="1";
                }
            }
            else
            {
                com(i,a+1)
                {
                    s+="0";
                }
            }
        }
        else
        {
            com(i,b+1)
            {
                if(i%2==0)
                    s+="1";
                else
                    s+="0";
            }
            com(i,a)
            {
                s.insert(1,"0");
            }
            com(i,c)
            {
                s.insert(0,"1");
            }
        }
        cout << s << endl;
    }
}
