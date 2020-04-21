#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     string x,s[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
     int n,c;
     cin>>x>>n;
     com(i,12)
     {
          if(s[i]==x)
               c=i;
     }
     n+=c;
     if(n>11)
     {
          n=n%12;
          cout << s[n] << endl;
     }
     else
          cout << s[n] << endl;
}
