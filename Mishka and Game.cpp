#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,mis=0,ris=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        {
            mis++;
        }
        else if(a==b)
        {
            continue;
        }
        else
        {
            ris++;
        }
    }
    if(mis>ris)
    {
        cout << "Mishka" <<endl;
    }
    else if(mis==ris)
    {
        cout << "Friendship is magic!^^" <<endl;
    }
    else
        cout << "Chris" <<endl;
}
