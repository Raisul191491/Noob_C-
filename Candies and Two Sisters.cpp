#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(t)
     {
          long long int n;
          cin>>n;
          if(n<=2)
               cout << "0" <<endl;
          else
          {
               if(n%2==0)
                    cout << (n-1)/2 <<endl;
               else
                    cout << n/2 <<endl;
          }

     }
}
