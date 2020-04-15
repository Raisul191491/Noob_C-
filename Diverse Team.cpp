#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    com(i,n)
    {
        com(j,n)
        {
            if(i!=j && a[i]==a[j])
                a[j]=0;
        }
    }
    com(i,n)
    {
        if(a[i]!=0)
        {
            cnt++;
        }
    }
    if(cnt>=k)
    {
        cout << "YES\n";
        com(i,n)
        {
            if(k>0 && a[i]!=0)
            {
                cout << i+1 << " ";
                k--;
            }
        }
    }
    else
        cout << "NO\n";
}
