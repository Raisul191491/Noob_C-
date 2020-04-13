#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,prb=0,a;
     vector<int>team;
     cin>>n;
     while(n--)
     {
          cin>>a;
          team.push_back(a);
     }
     sort(team.begin(),team.end());
     for(int i=0;i<team.size();i=i+2)
     {
          prb+=(team[i+1]-team[i]);
     }
     cout << prb <<endl;
}
