#include <iostream>
using namespace std;
main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<s.length();j++)
            cout<<s[i]<<s[j]<<' ';
    }
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            for(int x=0;x<s.length();x++)
                cout<<s[i]<<s[j]<<s[x]<<' ';
        }
    }
}
