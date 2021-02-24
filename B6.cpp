#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        for(int x=j+1;x<n;x++) if(a[i]+a[j]+a[x]==0) cout<<a[i]<<' '<<a[j]<<' '<<a[x]<<endl;
}
