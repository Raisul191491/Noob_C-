#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a1,a2,a3,b1,b2,b3,shel;
     float cup,med;
     cin>>a1>>a2>>a3>>b1>>b2>>b3>>shel;
     cup=a1+a2+a3;
     med=b1+b2+b3;
     while(cup>0)
     {
          shel--;
          cup-=5;
     }
     while(med>0)
     {
          shel--;
          med-=10;
     }
     if(shel>=0)
     {
          cout << "YES" << endl;
     }
     else
     {
          cout << "NO" << endl;
     }
}
