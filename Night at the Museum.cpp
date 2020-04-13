#include<bits/stdc++.h>
using namespace std;
int main()
{
     string name;
     int rot=0,dif,pres=97;
     cin>>name;
     for(int i=0;i<name.size();i++)
     {
          dif=abs(name[i]-pres);
          if(dif>13)
          {
               dif=26-dif;
          }
          rot+=dif;
          pres=name[i];
     }
     cout << rot <<endl;
}
