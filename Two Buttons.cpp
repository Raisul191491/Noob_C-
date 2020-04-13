#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,step=0;
    cin>>n>>m;
    while(n!=m)
    {
        if(n<m)
        {
            if(m%2==0)
            {
                m/=2;
                step++;
            }
            else
            {
                m++;
                step++;
            }


        }
        else if(n>m)
        {
            step+=(n-m);
            n=m;
        }
    }
    cout<< step <<endl;
}
