#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,pos=0,l=0,r=0,flag=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1; i>0; i--)
    {
        if(a[i]<a[i-1])
        {
            r=i;
            break;
        }
    }
    sort(a+l,a+r+1);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << l+1 << " " << r+1 <<endl;
    }
}
