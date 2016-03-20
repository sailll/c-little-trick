#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s1("1");
    string &s2(s1);
    s2="hello";
    cout<<s1<<endl;
    string line;
    vector<int> t;
    for(int i=0;i<5;i++)
    {
        t.push_back(i);
    }
    t[1]='u';
    cout<<t[1]<<endl;
    return 0;
    
}