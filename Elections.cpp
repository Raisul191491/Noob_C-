#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    float x,sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<int>());
    sum+=sum;
    x=ceil(sum/n);
    if(x>a[0])
        cout << x <<endl;
    else
        cout << a[0] <<endl;
}
