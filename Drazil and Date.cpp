#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s,sum;
    cin>>a>>b>>s;
    sum=abs(a)+abs(b);
    if(s>=sum && s%2==sum%2)
    {
        cout<< "Yes" <<endl;
    }
    else
    {
            cout<< "No" <<endl;
    }
}
