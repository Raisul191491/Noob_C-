#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,a,counter=0;
     cin>>t;
     while(t--)
     {
          vector<int>setn;
          cin>>n;
          while(n--)
          {
               cin>>a;
               setn.push_back(a);
          }
          sort(setn.begin(),setn.end());
          counter=setn.size();
          for(int i=0;i<setn.size();i++)
          {
               if(setn[i]==setn[i+1])
                    counter--;
          }
          cout<< counter << endl;


     }
}
