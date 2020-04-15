#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(t)
    {
        int n,a,b,x=0;
        char k;
        cin>>n>>a>>b;
        k=97;
        com(n)
        {
            cout << k;
            k++;
            x++;
            if(x==b)
            {
                 x=0;
                 k=97;
            }
        }
        cout << endl;
    }
}
