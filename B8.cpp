#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[10000],b[10000];
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i]) {cout<<"No"; return 0;}
    }
    cout<<"Yes";
}
