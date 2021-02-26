#include <iostream>
#include <cmath>
using namespace std;
 void Eratosthenessieve(int n)
 {bool a[n+1];
 for(int i=0;i<=n;i++) a[i]=1;
     for(int i=2;i<=n;i++)
     { if(a[i])
         {cout<<i<<" ";
         for(int j=i;j<=n;j+=i)
         a[j]=0;
         }
     }
 }
main()
{
    int n;
    cin>>n;
  Eratosthenessieve(n);
}
