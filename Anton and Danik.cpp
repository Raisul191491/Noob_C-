#include<bits/stdc++.h>
using namespace std;
int main()
{
     char ara[100000];
     int n,i,dan=0,ant=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>ara[i];
          if(ara[i]=='A')
               ant++;
          else
               dan++;
     }
     if(ant>dan)
          cout<< "Anton" <<endl;
     else if(ant==dan)
          cout<< "Friendship" <<endl;
     else
          cout<< "Danik" <<endl;
}
