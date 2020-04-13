#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[101]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char c,s;
    scanf("%c",&c);
    scanf("%s",s);
    if(c=='L')
    {
        for(int i=0;i<strlen(s); i++)
        {
            for(int j=0; j<strlen(n); j--)
            {
                if(s[i]==n[j])
                {
                    s[i]=n[j+1];
                }
            }
        }
    }
    else if(c=='R')
    {

        for(int i=0; i<strlen(s); i++)
        {
            for(int j=0; j<strlen(n); j++)
            {
                if(s[i]==n[j])
                {
                    s[i]=n[j-1];
                }
            }
        }
    }

    printf("%s\n",s);
}
