#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n, k, l, c, d, p, nl, np, toast;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     k=k*l;
     k=k/nl;
     nl=k/n;
     d=c*d/n;
     p=p/np;
     np=p/n;
     toast=min(min(nl,d),np);
     cout<< toast << endl;
}
