#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,two=0,thr=0;
     cin>>n;
     if(n%2==0)
     {
          two=n/2;
     }
     else
     {
          two=n/2-1;
          thr=1;
     }
     cout << two+thr << endl;
     for(int i=0;i<two;i++)
     {
          cout << "2 ";
     }
     for(int i=0;i<thr;i++)
     {
          cout << "3";
     }
}

