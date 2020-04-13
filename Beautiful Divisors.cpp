#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[8]= {32640,8128,2016,496,120,28,6,1};
    cin>>n;
    for(int i=0; i<8; i++)
    {
        if(n%m[i]==0)
        {
            cout << m[i] << endl;
            break;
        }
    }
}
