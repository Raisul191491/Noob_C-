#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a;
     cin>>n;
     vector<int>grav;
     while(n--)
     {
          cin>>a;
          grav.push_back(a);
     }
     sort(grav.begin(),grav.end());
     for(int i=0;i<grav.size();i++)
          cout << grav[i] << " ";
}
