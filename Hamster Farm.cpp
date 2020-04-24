#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    long long int n,k,ham=1000000000000000000,x,y;
    cin>>n>>k;
    long long int box[k];
    com(i,k)
    {
        cin>>box[i];
    }
    if(n==0)
        cout << "1 0\n";
    else
    {
        com(i,k)
        {
            x=n-((n/box[i])*box[i]);
            if(x<ham)
            {
                ham=min(ham,x);
                y=i+1;
            }
        }
        cout << y << " " << n/box[y-1] << endl;
    }
}
