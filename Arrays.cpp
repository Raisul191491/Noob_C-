#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,m,i,j,sum=0,flag;
    cin>>a>>b>>k>>m;
    int araa[a],arab[b];
    for(i=0; i<a; i++)
        cin>>araa[i];
    for(i=0; i<b; i++)
        cin>>arab[i];
    for(j=0; j<k; j++)
    {
        if(araa[j]<arab[b-m])
            flag=0;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
