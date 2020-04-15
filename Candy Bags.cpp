#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
     int n,x;
     cin>>n;
     x=n*n;
     int a[x],b[x];
     com(x)
     {
          a[i]=i+1;
          b[i]=i+1;
     }
     sort(b,b+x,greater<int>());
     for(int i=0;i<x/2;i+=2)
     {
          cout << a[i] << " " << b[i] << " ";
     }
     cout<<endl;
     for(int i=1;i<=x/2;i+=2)
     {
          cout << a[i] << " " << b[i] << " ";
     }
}
