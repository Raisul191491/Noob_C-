#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int k,m[12],wat=0;
    cin>>k;
    com(i,12)
    {
        cin>>m[i];
    }
    if(k==0)
    {
        cout << "0\n";
        return 0;
    }
    sortD(m,12);
    com(i,12)
    {
        wat+=m[i];
        if(wat>=k)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    if(wat<k)
        cout << "-1\n";
}
