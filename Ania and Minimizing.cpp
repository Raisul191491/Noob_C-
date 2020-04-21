#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(s.size()==1)
    {
        if(k==1)
        {
            cout << "0\n";
            return 0;
        }
    }
    else
    {
        com(i,n)
        {
            if(k==0)
                break;
            if(i==0)
            {
                if(s[i]!='1')
                {
                    s[i]='1';
                    k--;
                }
            }
            else
            {
                if(s[i]!='0')
                {
                    s[i]='0';
                    k--;
                }
            }
        }
    }
    cout << s;
}
