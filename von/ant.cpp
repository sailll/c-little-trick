#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void solve(int *p,int &l,int &n)
    {
        int mint=0;
        int maxt=0;
        for(int i=0;i<n;i++)
        {
            mint=max(mint,min(*(p+i),l-*(p+i)));
        }
        for(int i=0;i<n;i++)
        {
            maxt=max(maxt,max(*(p+i),l-*(p+i)));
        }
        cout<<"the maximum time is "<<maxt<<endl;
        cout<<"the minimum time is "<<mint<<endl;
    }
};
int main()
{
    cout<<max(5,8)<<endl;
    int l ,n;
    int a[n];
    int *p=a;
    cin>>l>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solution s;
    s.solve(p,l,n);
    return 0;
}