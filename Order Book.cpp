#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,a,b;
    char stp;
    cin>>n>>s;
    vector<char>str;
    vector<int>com,dom;
    for(int i=0; i<n; i++)
    {
        cin>>stp;
        str.push_back(stp);
        cin>>a>>b;
        com.push_back(a);
        dom.push_back(b);
    }
    if(s<n)
    {
        for(int i=0; i<str.size(); i++)
        {
            for(int j=i+1; j<str.size(); j++)
            {
                if(str[i]==str[j])
                {
                    if(com[i]==com[j])
                    {
                        dom[i]+=dom[j];
                        str.erase(str.begin()+j);
                        com.erase(com.begin()+j);
                        dom.erase(dom.begin()+j);
                    }
                }
            }
        }
        vector<int>com2(com);
        sort(com2.begin(),com2.end(),greater<int>());
        for(int i=0; i<2*s; i++)
        {
            for(int j=0; j<com2.size(); j++)
            {
                if(com2[i]==com[j])
                {
                    cout << str[j] << " " << com[j] << " " << dom[j] <<endl;
                }
            }
        }
    }
    else
    {
        vector<int>com2(com);
        sort(com2.begin(),com2.end(),greater<int>());
        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s; j++)
            {
                if(com2[i]==com[j] && i!=j)
                {
                    cout << str[j] << " " << com[j] << " " << dom[j] <<endl;
                }
            }
        }
    }

}
