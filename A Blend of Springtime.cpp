#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n>=3)
    {
        com(n-2)
        {
            if(s[i]*s[i+1]*s[i+2]=='A'*'B'*'C')
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
