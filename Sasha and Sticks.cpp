#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k;
     cin>>n>>k;
     if(k>n)
     {
          cout<< "NO" <<endl;
     }
     else if((n/k)%2==0)
     {
          cout<< "NO" <<endl;
     }
     else
          cout<< "YES" <<endl;
}
