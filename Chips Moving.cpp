#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
     int n,cou,coin1=0,coin2=0;
     cin>>n;
     vector <int> x;
     while(n--)
     {
          cin>>cou;
          x.push_back(cou);
     }
     sort(x.begin(),x.end());
     for(int i=0;i<x.size();i++)
     {
          if(x.at(i)%2==0) coin1++;
          else coin2++;
     }
     cout<< min(coin1,coin2) << endl;
}
