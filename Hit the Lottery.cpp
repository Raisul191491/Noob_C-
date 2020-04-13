#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,bill=0;
    cin>>n;
    vector<int>dol;
    dol.push_back(100);
    dol.push_back(20);
    dol.push_back(10);
    dol.push_back(5);
    dol.push_back(1);
    for(int i=0;i<dol.size();i++)
    {
         bill+=(n/dol[i]);
         n=n%dol[i];
    }
    cout << bill <<endl;
}
