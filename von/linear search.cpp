#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
    int linear_search(vector<int> &a,int value)
    {
        int len=a.size();
        for(int i=0;i<len;i++)
        {
            if(a[i]==value)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> a;
    solution po;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cval;
        cin>>cval;
        a.push_back(cval);
    }
    cout<<"enter the value you want to search"<<endl;
    int value;
    cin>>value;
    cout<<po.linear_search(a, value)<<endl;
}