#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    vector<int>side;
    cin>>n;
    while(n--)
    {
        side.clear();
        cin>>a>>b>>c>>d;
        side.push_back(a);
        side.push_back(b);
        side.push_back(c);
        side.push_back(d);
        sort(side.begin(),side.end());
        if(side[0]==side[1] && side[2]==side[3])
        {
            cout << "YES" <<endl;
        }
        else
            cout<< "NO" <<endl;
    }

}
