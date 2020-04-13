#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
     long long int n,a,time=0;
     cin>>n;
     vector<long long int>x,y;
     com(n)
     {
          cin>>a;
          x.push_back(a);
          y.push_back(a);
     }
     sort(x.begin(),x.end());
     sort(y.begin(),y.end(),greater<int>());
     com(n)
     {
          time+=(x[i]*y[i]);
     }
     cout << time%10007 <<endl;
}
