#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,bal1,bal2;
    cin>>n;
    if(n>0)
    {
        cout << n <<endl;
    }
    else
    {
        bal1=n/10;
        bal2=(n/100)*10+n%10;
        bal1=max(bal1,bal2);
        cout<< bal1 <<endl;
    }

}
