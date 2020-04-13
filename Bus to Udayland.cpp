#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string sit;
    cin>>n;
    vector<string>row;
    while(n--)
    {
        cin>> sit;
        row.push_back(sit);
    }
    for(int i=0; i<row.size(); i++)
    {
        for(int j=0; j<5; j++)
        {
            if(row[i][j]=='O' && row[i][j+1]=='O')
            {
                row[i][j]='+';
                row[i][j+1]='+';

                cout << "YES" <<endl;
                for(int i=0; i<row.size(); i++)
                {
                    cout << row[i] <<endl;
                }
                return 0;
            }
        }
    }
    cout << "NO" <<endl;
}
