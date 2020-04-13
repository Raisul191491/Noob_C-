#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[5],ans;
    for(int i=0; i<4; i++)
    {
        cin>>num[i];
    }
    sort(num,num+4);
    for(int i=0; i<3; i++)
    {
        if(i<2)
        {
            ans=num[3]-num[i];
            cout << ans << " ";
        }
        else
        {
            ans=num[3]-num[i];
            cout << ans << endl;
        }
    }

}
