#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,push=0;
     cin>>n;
     for(int i=1;i<n;i++)
     {
          push+=(n-i)*i;
     }
     cout << push+n << endl;
}
