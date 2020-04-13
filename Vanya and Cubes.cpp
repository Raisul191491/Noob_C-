#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=1,cnt=0,sum=0;
    cin>>n;
    while(1)
    {
        for(int i=0; i<=x; i++)
        {
            sum+=i;
        }
        x++;
        if(sum>n)
            break;
        else
            cnt++;
    }
    cout << cnt <<endl;
}
