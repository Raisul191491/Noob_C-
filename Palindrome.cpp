#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,sum=0;
    string s,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        x=s;
        reverse(s.begin(),s.end());
        if(s==x)
        {
            sum++;
        }
    }
    cout << sum << endl;
}
