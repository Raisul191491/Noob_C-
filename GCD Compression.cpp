#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,x,cnt,y=0;
          cin>>n;
          cnt=n-1;
          vector<long long>odd,eve;
          for(int i=0;i<2*n;i++)
          {
               cin>>x;
               if(x&1)
                    odd.push_back(i+1);
               else
                    eve.push_back(i+1);
          }
          int l=odd.size(),r=eve.size();
          while(l>1 && cnt>0)
          {
               cout << odd[y] << " " << odd[y+1] << endl;
               y+=2;
               cnt--;
               l-=2;
               //cout << cnt << endl;
          }
          y=0;
          while(r>1 && cnt>0)
          {
               cout << eve[y] << " " << eve[y+1] << endl;
               y+=2;
               cnt--;
               r-=2;
          }
     }
}
