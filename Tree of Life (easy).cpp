#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     long long int n,var[100010],ll=0;
     cin>>n;
     com(i,n-1)
     {
          int a,b;
          cin>>a>>b;
          var[a]++;
          var[b]++;
     }
     dom(i,n)
     {
          ll+=var[i]*(var[i]-1)/2;
     }
     cout << ll << endl;
}
