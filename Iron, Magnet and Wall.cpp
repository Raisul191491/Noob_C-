#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
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
    int t;
    cin>>t;
    com(cc,t)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int mcnt=0,i=0,j=0,scnt=0;

        while(i<n && j<n)
        {
            if(s[i]=='M')
            {
                while(j<n)
                {
                    if(s[j]=='I')
                    {
                        for(int xx=min(i,j)+1; xx<max(i,j); xx++)
                        {
                            if(s[xx]==':')
                                scnt++;
                        }
                        int p=k+1-abs(i-j)-scnt;
                        if(p>0)
                        {
                            mcnt++;
                            j++;
                            i++;
                            scnt=0;
                            break;
                        }
                        else if(p<=0)
                        {
                            if(j<i)
                                j++;
                            else
                            {
                                 i++;
                                 scnt=0;
                                 break;
                            }
                            scnt=0;
                        }
                    }
                    else if(s[j]=='X')
                    {
                        j++;
                        if(i<j)
                         i=j;
                        scnt=0;
                        break;
                    }
                    else
                        j++;
                }
            }
            else if(s[i]=='X')
            {
                i++;
                if(j<i)
                    j=i;
            }
            else
                i++;
        }
        cout << mcnt << endl;
    }
}
