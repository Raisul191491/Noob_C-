#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,sum=0;
     cin>>n;
     vector<int>coin;
     while(n--)
     {
          cin>>a;
          coin.push_back(a);
     }
     sort(coin.begin(),coin.end());
     for(int i=0;i<coin.size()-1;i++)
     {
          sum+= coin[coin.size()-1]-coin[i];
     }
     cout<< sum << endl;

}
