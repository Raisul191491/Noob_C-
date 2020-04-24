#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int b,p,f,h,c,x,price=0;
        cin>>b>>p>>f>>h>>c;
        x=b/2;
        if(x==0)
        {
            cout << price << endl;
            continue;
        }
        if(h>c)
        {
            if(p<=x)
            {
                price+= p*h;
                x-=p;
                if(f<=x)
                {
                    price+=f*c;
                }
                else
                {
                    price+=x*c;
                }
            }
            else
            {
                price+=x*h;
            }
        }
        else
        {
            if(f<=x)
            {
                price+= f*c;
                x-=f;
                if(p<=x)
                {
                    price+=p*h;
                }
                else
                {
                    price+=x*h;
                }
            }
            else
            {
                price+=x*c;
            }
        }
        cout << price << endl;
    }
}
