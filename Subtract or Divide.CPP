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
    bool pr[1000000009];
    memset(pr, true, sizeof(pr));

    for (int p=2; p*p<=1000000008; p++)
    {
        if (pr[p] == true)
        {
            for (int i=p*p; i<=1000000008; i += p)
                pr[i] = false;
        }
    }

    int n,cnt=0;
    cin>>n;
    while(n!=1)
    {
        if(n==1)
        {
            break;
        }
        else if(n==2)
        {
            cnt+=1;
            n=1;
        }
        else if(n==3)
        {
            cnt+=2;
            n=1;
        }
        else
        {
            if(pr[n]==true)
            {
                n--;
                cnt++;
            }
            else
            {
                 dom(i,sqrt(n))
                 {
                      if(n%i==0)
                      {
                           cnt++;
                           n=i;
                      }
                 }
            }
        }
    }
    cout << cnt << endl << endl;
}
