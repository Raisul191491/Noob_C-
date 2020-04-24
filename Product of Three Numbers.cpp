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
        int n;
        cin>>n;
        int x,y,z,flag=0;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                x=i;
                y=n/i;
                {
                    for(int j=i+1; j*j<=y; j++)
                    {
                        if(y%j==0)
                        {
                            if((y/j)!=j)
                            {
                                z=y/j;
                                y=j;
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
        else
            cout << "NO\n";
    }
}
