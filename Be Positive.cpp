#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int high=0,low=0;
     int a[n];
     float x=n;
     x=ceil(x/2);
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
          if((a[i]/1)>0)
               high++;
          else if((a[i]/(-1))>0)
               low++;
     }
     if(high>=x)
          cout << "1" << endl;
     else if(low>=x)
          cout << "-1" << endl;
     else
          cout << "0\n";
}
