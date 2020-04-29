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
    bool num[10];
    com(i,10)
    {
        num[i]=false;
    }
    long long int n,x,rem,cnt=0;
    cin>>n;
    x=n;
    vector<int>div;
    dom(i,sqrt(n))
    {
        if(n%i==0)
        {
            div.push_back(i);
            if(n/i>i)
                div.push_back(n/i);
        }
    }
    while(x>0)
    {
        num[x%10]=true;
        x/=10;
    }
    com(i,div.size())
    {
        while(div[i]>0)
        {
            if(num[div[i]%10]==true)
            {
                cnt++;
                break;
            }
            div[i]/=10;
        }
    }
    cout << cnt << endl;
}
