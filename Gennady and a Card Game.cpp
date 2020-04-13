#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s1;
    string s2[5];
    cin>>s1;
    for(int i=0; i<5; i++)
    {
        cin>>s2[i];
    }
    for(int i=0; i<5; i++)
    {
        if(s1[0]==s2[i][0] || s1[0]==s2[i][1] || s1[1]==s2[i][0] || s1[1]==s2[i][1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
         cout << "YES" <<endl;
    }
    else
    {
         cout << "NO" <<endl;
    }
}
