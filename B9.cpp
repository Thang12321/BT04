#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct toado
{
    int x,y;
};
main()
{
    int n;
    cin>>n;
    toado a[10000];
    for(int i=0;i<n;i++)
        cin>>a[i].x>>a[i].y;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            if(a[i].x==a[j].x||a[i].y==a[j].y||(abs(a[i].x-a[j].x)==abs(a[j].y-a[j].y))) {cout<<"Yes"; return 0;}
        }
    }
    cout<<"No";
}
