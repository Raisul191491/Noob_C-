#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
          cout << a[i]-1 << " ";
        else
          cout << a[i] << " ";
    }
}
