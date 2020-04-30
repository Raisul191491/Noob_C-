#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    cin>>x>>y;
    if((y/2)-1<=a&&a-1<=y||(x/2)-1<=b&&b-1<=x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
