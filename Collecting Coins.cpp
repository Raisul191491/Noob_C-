#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,a,b,c,x;
    cin>>t;
    for(int i=0; i<t; i++)
    {
         int sum=0;
        cin>>a>>b>>c>>x;
        sum+=a+b+c+x;
        if(sum%3!=0 || sum/3<a ||  sum/3<b ||  sum/3<c)
        {
             cout << "NO" <<endl;
        }
        else
        {
             cout<< "YES" <<endl;
        }
    }
}
