#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int n,team=1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1; i<n; i++)
        {
            if(abs(a[i]-a[i-1])<=1)
            {
                team++;
                break;
            }
        }
        cout << team <<endl;
    }
}
