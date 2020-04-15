#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        long long int n,k,step=0,x;
        cin>>n>>k;
        com(i,99999999999999999)
        {
            if(n==0)
                break;
            if(n%k==0)
            {
                step++;
                n/=k;
            }
            else
            {
                x=n-(n/k)*k;
                step+=x;
                n=(n/k)*k;
            }
        }
        cout << step <<endl;
    }
}
