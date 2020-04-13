#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    int i,dis=0,l;
    gets(s);
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            dis++;
            if(s[i]==s[i+1])
            {
                dis--;
            }
        }


    }
    cout << dis <<endl;
}
