#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class solution
{
public:
    void merge_sort(vector<int> &a)
    {
        long len=a.size();
        for(int i=1;i<len;i++)
        {
            int key=a[i];
            for(int j=i-1;j>=0&&a[j]>key;j--)
            {
                a[j+1]=a[j];
                a[j]=key;
            }
        }
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
    po.merge_sort(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}