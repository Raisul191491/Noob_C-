#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,face=0;
    cin>>n>>m;
    char a[100][100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            string s = "0000";
            s[0] = a[i][j];
            s[1] = a[i + 1][j];
            s[2] = a[i][j + 1];
            s[3] = a[i + 1][j + 1];
            sort(s.begin(), s.end());
            if(s=="acef")
            {
                face++;
            }
        }
    }
    cout << face << endl;

}
