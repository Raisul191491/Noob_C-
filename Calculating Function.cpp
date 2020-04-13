#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,sum;
     cin>>n;
     if(n%2==1)
          sum=((n/2)+1)*(-1);
     else
          sum= (n/2);
     cout<< sum << endl;
}
