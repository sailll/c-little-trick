#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class solution
{
public:
    void insertion_sort(vector<int> &a)
    {
        long len=a.size();
        for(int i=1;i<len;i++)
        {
            for(int j=i-1;a[j+1]<a[j]&j>=0;j--)
            {
                a[j+1]=a[j+1]^a[j];
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j+1]^a[j];
            }
        }
    }
    void output(vector<int> &a)
    {
        long len=a.size();
        for(int i=0;i<len;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int cval;
        cin>>cval;
        a.push_back(cval);
    }
    solution po;
    po.insertion_sort(a);
    po.output(a);
    return 0;
}