#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,al=0,bob=0,beg=0,en,mov=0,flag=0;
        int alice=0,bobice=0;
        cin>>n;
        en=n-1;
        int coc[n];
        com(j,n)
        {
            cin>>coc[j];
        }
        com(j,n)
        {
            if(j%2==0)
            {
                if(coc[beg]!=0)
                {
                    mov++;
                    alice=0;
                    while(alice<=bobice)
                    {
                        if(coc[beg]==0)
                        {
                            flag=1;
                            break;
                        }
                        al+=coc[beg];
                        alice+=coc[beg];
                        coc[beg]=0;
                        beg++;
                    }
                }
                else
                    break;
            }
            else if(j%2!=0)
            {
                if(coc[en]!=0)
                {
                    mov++;
                    bobice=0;
                    while(bobice<=alice)
                    {
                        if(coc[en]==0)
                        {
                            flag=1;
                            break;
                        }
                        bob+=coc[en];
                        bobice+=coc[en];
                        coc[en]=0;
                        en--;
                    }
                }
                else
                    break;
            }
            if(flag==1)
                break;
        }
        cout << mov << " " << al<< " " << bob << endl;
    }
}
