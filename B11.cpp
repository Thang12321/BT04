#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    int n;
    cin>>n;
    string s[10000];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string x=s[j];
          reverse(x.begin(),x.end());

            if(s[i]==x) cout<<s[i].length()<<" "<<s[i][s[i].length()/2];
        }
    }
}
