#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,moves=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            moves+=((n+1)/2);
        }
        else
        {
            moves+=(n/2);
        }
    }
    cout << moves <<endl;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2==0)
        {
            for(int i=0; i<n; i++)
            {
                 if(i%2==0)
                    cout << ".";
                 else
                    cout << "C";
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                 if((i+1)%2==0)
                    cout << ".";
                 else
                    cout << "C";
            }
        }
        cout << "\n";
    }

}
