#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if((n-9)%2==0)
     {
          cout << n-9 << " 9" <<endl;
     }
     else
     {
          cout << n-4 << " 4" <<endl;
     }
}
