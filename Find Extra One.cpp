#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,pl=0,mi=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x>0)
            pl++;
        else
            mi++;
    }
    if(pl<2||mi<2)
        cout << "Yes" << endl;
    else
        cout << "No" <<endl;
}
