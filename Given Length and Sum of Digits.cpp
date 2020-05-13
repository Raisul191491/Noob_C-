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
    int m,s,a;
    string x,y;
    cin>>m>>s;
    if((s==0&&m>1) || s>m*9)
    {
        cout << "-1 -1\n";
        return 0;
    }
    if(s==0 && m==1)
    {
        cout << "0 0\n";
        return 0;
    }
    com(i,m)
    {
        a=min(s,9);
        x+=(a+'0');
        s-=a;
    }
    if(s>0)
    {
        cout << "-1 -1\n";
        return 0;
    }
    y=x;
    reverse(y.begin(),y.end());
    if(m>1&&(y[0]-'0')==0)
    {
         y[0]=(((y[0]+'0')+1)-'0');
         dom(i,y.size()-1)
         {
              if((y[i]-'0')>0)
              {
                   y[i]=(((y[i]+'0')-1)-'0');
                   break;
              }
         }
    }
    cout << y << " " << x << endl;
}
