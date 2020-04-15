#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    int n,sw=0;
    cin>>n;
    int a[n];
    com(n)
    {
        cin>>a[i];
        if(a[i]==1)
            sw++;
    }
    cout << sw <<endl;
    for(int i=1;i<n;i++)
    {
         if(a[i]==1)
          cout << a[i-1] << " ";
    }
    cout << a[n-1] <<endl;
}
