#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n,sum=0;
     cin>>n;
     int key[n];
     com(n)
     {
          cin>>key[i];
     }
     sortI(key,n);
     com(n-1)
     {
          sum=sum+abs(key[i]-key[i+1])-1;
     }
     cout << sum <<endl;
}
