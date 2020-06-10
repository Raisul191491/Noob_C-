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
    int x,y,cnt=0,con=1;
    cin>>x>>y;
    x=x*100;
    y*=10;
    while(1)
    {
        int sum=0;
        if(con%2)
        {
            sum=min(200,x);
            x-=sum;
            if(220-sum<=y)
            {
                y-=220-sum;
            }
            else
            {
                cout << "Hanako\n";
                break;
            }
        }
        else
        {
            sum=min(220,y);
            if(sum==220)
                y-=220;
            else if(sum<220 && sum>=120)
            {
                sum=120;
                y-=120;
            }
            else if(sum<120 && sum>=20)
            {
                sum=20;
                y-=20;
            }
            else
            {
                cout << "Ciel\n";
                break;
            }
            if(220-sum>x)
            {
                cout << "Ceil\n";
                break;
            }
            else
            {
                x-=220-sum;
            }
        }
        con++;
    }
}
