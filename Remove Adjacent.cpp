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
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(char a='z'; a>'a'; a--)
    {
        com(i,n)
        {
            if(s.size()==1)
                break;
            if(s[i]==a)
            {
                if(i==0&&s[i+1]==a-1)
                {
                    s.erase(s.begin()+i);
                    i=-1;
                    cnt++;
                }
                else if(i==s.length()-1&&s[i-1]==a-1)
                {
                    s.erase(s.begin()+i);
                    i=-1;
                    cnt++;
                }
                else if(s[i+1]==a-1||s[i-1]==a-1)
                {
                    s.erase(s.begin()+i);
                    i=-1;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}
