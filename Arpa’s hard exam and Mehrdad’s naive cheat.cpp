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
     long long int n,x;
     cin>>n;
     if(n==0)
          cout << "1\n";
     else if(n%4==0)
          cout << "6\n";
     else if(n%4==1)
          cout << "8\n";
     else if(n%4==2)
          cout << "4\n";
     else if(n%4==3)
          cout << "2\n";
}
