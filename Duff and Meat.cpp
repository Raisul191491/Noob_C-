#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,a,p,total=0,pri=1000;
     cin>>n;
     while(n--)
     {
          cin>>a>>p;
          if(p<pri)
          {
               pri=p;
          }
          total+=a*pri;
     }
     cout << total <<endl;
}
