#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x1,x2,x3,mini,maxi;
     cin>>x1>>x2>>x3;
     mini=min(x1,min(x2,x3));
     maxi=max(x1,max(x2,x3));
     cout << maxi-mini << endl;
}
