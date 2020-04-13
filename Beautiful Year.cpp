#include<bits/stdc++.h>
using namespace std;
int main()
{
     int y,rem,dem;
     cin>>y;
     dem=y;
     vector<int>year;
     while(y!=0)
     {
          rem = y%10;
          year.push_back(rem);
          y=y/10;
     }
}
