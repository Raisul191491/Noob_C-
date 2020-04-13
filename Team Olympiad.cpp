#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,t,one=0,two=0,thr=0;
     vector<int>s1,s2,s3;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
          if(a[i]==1)
          {
               one++;
               s1.push_back(i+1);
          }
          else if(a[i]==2)
          {
               two++;
               s2.push_back(i+1);
          }
          else if(a[i]==3)
          {
               thr++;
               s3.push_back(i+1);
          }
     }
     t=min(one,min(two,thr));
     cout << t << endl;
     for(int i=0;i<t;i++)
     {
          cout << s1[i] << " " << s2[i] << " " << s3[i]  <<endl;
     }

}
