#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     vector<int>per;
     if(n%2==0)
          for(int i=1;i<n;i++)
          {
               per.push_back(i+1);
               per.push_back(i);
               i++;
          }
     else
          per.push_back(-1);
     for(int i=0;i<per.size();i++)
          cout << per[i] << " ";

     return 0;
}
