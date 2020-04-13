#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string a,con;
    cin>>a;
    for(int con='a'; con<='z'; con++)
    {
        sum=0;
        for(int i=0; i<n; i++)
        {
            if(tolower(a[i])==con)
            {
                sum=1;
                break;
            }
        }
        if(sum==0)
        {
            break;
        }
    }
    if(sum==1)
        cout<< "YES"<< endl;
    else
        cout<< "NO" <<endl;
}
