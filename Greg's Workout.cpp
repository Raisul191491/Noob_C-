#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,chest=0,bicep=0,bac=0;
     cin>>n;
     int s[n];
     for(int i=1;i<=n;i++)
     {
          cin>>s[i];
     }
     for(int i=1;i<=n;i++)
     {
          if(i%3==0)
          {
               bac+=s[i];
          }
          else if(i%3==1)
          {
               chest+=s[i];
          }
          else
               bicep+=s[i];
     }
     if(chest>bicep && chest>bac)
          cout << "chest" <<endl;
     else if(bicep>chest && bicep>bac)
          cout<< "biceps" << endl;
     else
          cout << "back" << endl;
}
