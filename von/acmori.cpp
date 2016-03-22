#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
    int len;
    int result=0;
    vector<int> m;
    void input()
    {
        cin>>len;
        for(int i=0;i<len;i++)
        {
            int cval;
            cin>>cval;
            m.push_back(cval);
        }
    }
    int sol(vector<int> &m)
    {
        for(int i=0;i<len;i++)
        {
            int k=0;
            for(k=i+1;k<m[i];k++)
            if((m[i]^m[k])>max(m[i],m[k]))
            result++;
        }
        return result;
    }
};
int main()
{
    int loop=0;
    cin>>loop;
    vector<int> ans;
    solution fun;
    for(int i=0;i<loop;i++)
    {
        fun.input();
        int temp=fun.sol(fun.m);
        ans.push_back(temp);
    }
    for(int i=0;i<loop;i++)
    {
        cout<<ans[i];
    }
}