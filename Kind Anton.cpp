#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,flag;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        if(a[0]!=b[0])
        {
            flag=1;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if(a[i-1]!=0 && (b[i]-a[i])%a[i-1]==0)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }

            }
        }
        if(flag==0)
            cout << "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }
}
