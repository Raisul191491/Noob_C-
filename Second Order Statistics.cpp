#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    sortI(a,n);
    if(n<2)
    {
        cout << "NO\n";
        return 0;
    }
    com(i,n-1)
    {
        if(a[i+1]>a[i])
        {
            cout << a[i+1] << endl;
            return 0;
        }
    }
    cout << "NO\n";
}
