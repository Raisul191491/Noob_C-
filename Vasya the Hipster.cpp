#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        sum++;
        a--;
        b--;
    }
    cout << sum << " ";
    if(a!=0)
    {
        cout<< a/2 <<endl;
    }
    else
    {
        cout<< b/2 <<endl;
    }
}
