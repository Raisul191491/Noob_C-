#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,a;
     cin>>n>>k;
     vector<int>fen,sum;
     for(int i=0;i<n;i++)
     {
          cin>>a;
          fen.push_back(a);
     }
     for(int i=0;i<n-k+1;i++)
     {
          a=0;
          for(int j=i;j<i+k;j++)
          {
               a+=fen[j];
          }
          sum.push_back(a);
     }
     vector<int>sum2(sum);
     sort(sum2.begin(),sum2.end());
     for(int i=0;i<n;i++)
     {
          if(sum[i]==sum2[0])
          {
               cout<< i+1 << endl;
               break;
          }
          else
               continue;
     }
}
