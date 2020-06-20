#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0,sit=0,beg=0,x;
        cin>>n>>k;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                 int cn=k;
                 i++;
                 while(i<n && cn--)
                 {
                      if(s[i]=='0')
                         i++;
                      else
                      {
                           break;
                      }
                 }
                 i--;
            }
            else
            {
                 sit++;
                 int cn=k;
                 i++;
                 while(i<n && cn--)
                 {
                      if(s[i]=='0')
                         i++;
                      else
                      {
                           sit--;
                           break;
                      }
                 }
                 i--;
            }
        }
        cout << sit << endl;
    }
}
