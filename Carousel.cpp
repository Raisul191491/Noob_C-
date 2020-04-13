#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j,flag,x;
    cin>>q;
    while(q>0)
    {
        cin>>n;
        int sum=n;
        int ara[n+1];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(i=0; i<n; i++)
        {
            flag=1;
            for(j=i+1; j<n; j++)
            {
                if(ara[i]==ara[j])
                {
                    flag=0;
                }
            }
            if(flag==0)
                sum--;
        }
        if(ara[i]==ara[n-1])
        {
            sum++;
        }
        cout<< sum << endl;
        x=ara[0];
        for(i=0; i<n-1; i++)
        {
            if(ara[i]<x)
            {
                x=ara[i];
            }
        }
        for(i=0; i<n; i++)
        {
            cout << ara[i]/x << " ";
        }
        q--;
        cout<< "\n";
    }
}
