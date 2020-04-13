#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,point;
     cin>>n>>k;
     if(n%2!=0)
     {
          if(k<=(n/2)+1)
               point=k*2-1;
          else
               point= (k-((n/2)+1))*2;
     }
     else
     {
          if(k<=n/2)
               point=k*2-1;
          else
               point= (k-n/2)*2;
     }
     cout<< point <<endl;;

}
