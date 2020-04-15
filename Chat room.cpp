#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
    string x,y="hello";
    int j=0,cnt=0;
    cin>>x;
    com(x.size())
    {
        if(x[i]==y[j])
        {
            j++;
            cnt++;
            if(cnt==5)
               break;
        }
    }
    if(cnt==5)
        cout<< "YES\n";
    else
        cout<< "NO\n";
}
