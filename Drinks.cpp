#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
     double total=0,j,sum;
     cin>>n;
     k=n;
     while(n--)
     {
          cin>>j;
          total+=j/100;
     }
     sum=(total/k)*100;
     printf("%.12lf\n",sum);
     return 0;

}
