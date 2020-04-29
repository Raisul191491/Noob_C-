#include<bits/stdc++.h>
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
        int zero=0,one=0;
        string s;
        cin>>s;
        com(i,s.size())
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(one==0)
        {
            com(i,2*s.size())
            {
                cout << "0";
            }
        }
        else if(zero==0)
        {
            com(i,2*s.size())
            {
                cout << "1";
            }
        }
        else
        {
            if(s[0]=='0')
            {
                com(i,s.size())
                {
                    cout << "01";
                }
            }
            else
            {
                com(i,s.size())
                {
                    cout << "10";
                }
            }
        }
        cout << endl;
    }
}
