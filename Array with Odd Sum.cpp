#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        long long int ara[n],odd=0,even=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2==0)
               even++;
            else
               odd++;
        }
        if(even==n || n%2==0 && odd==n)
            cout << "NO" <<endl;
        else
            cout << "YES" << endl;
    }

}
