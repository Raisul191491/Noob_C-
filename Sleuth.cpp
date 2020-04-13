#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],x;
    int l;
    gets(s);
    for(int i=strlen(s); i>=0; i--)
    {
        x=tolower(s[i]);
        if(x>=97 && x<=122)
        {
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='y')
            {
                cout << "YES" <<endl;
                break;
            }
            else
            {
                cout << "NO" <<endl;
                break;
            }
        }
        else
          continue;
    }
}
