#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=5; i>0; i--)
    {
        sum=sum+n/i;
        n=n%i;
    }
    cout<< sum << "\n";

    return 0;
}
