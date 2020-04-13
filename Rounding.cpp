#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if(n%10==0)
          n=n;
     else if(n%10==5)
          n-=5;
     else if(n%10<5)
          n=n-(n%10);
     else if(n%10>5)
          n=n+10-(n%10);
     cout << n <<endl;
}
