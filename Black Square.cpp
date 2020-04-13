#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],cal=0;
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            cal+=a[0];
        else if(s[i]=='2')
            cal+=a[1];
        else if(s[i]=='3')
            cal+=a[2];
        else if(s[i]=='4')
            cal+=a[3];
    }
    cout << cal << endl;
}
