#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<n/2; k++)
                {
                    if((i+j/2+k)%2==0)
                    {
                        cout << "bb";
                    }
                    else
                        cout << "ww";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
    else
        cout << "-1" << endl;
}
