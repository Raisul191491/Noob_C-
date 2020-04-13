#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,mag,group=0;
     cin>>n;
     vector<int>magnet;
     while(n--)
     {
          cin>>mag;
          magnet.push_back(mag);
     }
     for(int i=0;i<magnet.size();i++)
     {
          if(magnet[i]==magnet[i+1])
               continue;
          else
               group++;
     }
     cout<< group << endl;
}
