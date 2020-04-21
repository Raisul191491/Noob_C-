#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    string ch[8];
    int w=0,b=0;
    com(i,8)
    {
        cin>>ch[i];
    }
    com(i,8)
    {
        com(j,8)
        {
            if(islower(ch[i][j]))
            {
                if(ch[i][j]=='q')
                    b+=9;
                else if(ch[i][j]=='r')
                    b+=5;
                else if(ch[i][j]=='b')
                    b+=3;
                else if(ch[i][j]=='n')
                    b+=3;
                else if(ch[i][j]=='p')
                    b+=1;
            }
            else
            {
                if(ch[i][j]=='Q')
                    w+=9;
                else if(ch[i][j]=='R')
                    w+=5;
                else if(ch[i][j]=='B')
                    w+=3;
                else if(ch[i][j]=='N')
                    w+=3;
                else if(ch[i][j]=='P')
                    w+=1;
            }
        }
    }
    if(w>b)
        cout << "White\n";
    else if(w==b)
        cout << "Draw\n";
    else
        cout << "Black\n";
}
