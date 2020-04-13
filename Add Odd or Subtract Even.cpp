#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,z=0;
    cin>>t;
    while(z<t)
    {
        int sit=0;
        cin>>a>>b;
        if(b>a)
        {
            sit++;
            if((b-a)%2==0)
            {
                sit++;
            }

        }
        else if(a>b)
        {
            sit++;
            if((a-b)%2!=0)
            {
                sit++;
            }
        }
        else if(a==b)
        {
            sit=0;
        }
        cout<< sit << "\n";
        z++;
    }
}

