#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,oc=0,oz=0;
        cin>>n;
        string s;
        vector<char>ar,br;
        cin>>s;
        while(x<n)
        {
            if(s[x]=='0')
            {
                cout << '0';
                x++;
            }
            else
                break;
        }
        while(x<n)
        {
            if(s[x]=='1')
            {
                if(oz)
                    oz=1;
                oc++;
                x++;
            }
            else
            {
                if(oz==0)
                {
                    cout << '0';
                    oz++;
                    oc=0;
                    x++;
                }
                else
                {
                    x++;
                    oc=0;
                }
            }
        }
        while(oc--)
        {
            cout << '1';
        }
        cout << endl;
    }
}
