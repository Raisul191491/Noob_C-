#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[200];
    gets(x);
    for(int i=0; i<strlen(x); i++)
    {
        if(x[i]=='.')
        {
            cout<< "0";
        }
        else if(x[i]=='-' && x[i+1]=='.')
        {
            cout<< "1";
            i++;
        }
        else if(x[i]=='-' && x[i+1]=='-')
        {
            cout<< "2";
            i++;
        }
    }
    return 0;
}
