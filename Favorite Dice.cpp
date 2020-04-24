#include<stdio.h>

#include<math.h>



long long int rec(int m)

{

    if(m==1)

        return 5;

    else if(m==2)

        return 12;

    else

        return rec(m-1) + 10 + (m-3)*3;

}



int main()

{

    int n,x=1;;

    long long int s;





    while(x!=0)

    {

           scanf("%d",&n);

           x=n;

           if(x!=0)

           {

               s = rec(x);

               printf("%lld\n",s);

           }





    }

    return 0;



}
