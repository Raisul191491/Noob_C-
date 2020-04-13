#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ser=0,dim=0;
    cin>>n;
    int c[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    int x=0,y=n-1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(c[x]<c[y])
            {
                ser+=c[y];
                y--;
            }
            else if(c[y]<c[x])
            {
                ser+=c[x];
                x++;
            }
            else
                ser+=c[x];
        }
        else
        {
            if(c[x]<c[y])
            {
                dim+=c[y];
                y--;
            }
            else if(c[y]<c[x])
            {
                dim+=c[x];
                x++;
            }
            else
                dim+=c[x];
        }
    }
    cout << ser << " " << dim<< endl;
}
