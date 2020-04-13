#include<bits/stdc++.h>
using namespace std;
int main()
{
     string ins1,ins2,pile,tot;
     cin >>ins1>>ins2>>pile;
     ins1=ins1+ins2;
     sort(ins1.begin(),ins1.end());
     sort(pile.begin(),pile.end());
     if(ins1==pile)
     {
          cout<< "YES" <<endl;
     }
     else
          cout<< "NO" <<endl;
}
