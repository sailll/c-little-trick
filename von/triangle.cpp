#include <cstdio>
#include <iostream>
using namespace std;
int n;
int a[]={0};
int max(int a,int b);
int main()
{
    a[n]={0};
    void input();
    void solve();
    input();
    solve();
    return 0;

}
void input()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
}
void output()
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void solve()
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int len=a[i]+a[j]+a[k];
                int m=max(a[i],max(a[j],a[k]));
                if(2*m<len&&len>ans)
                {
                    ans=len;
                }
            }
        }
    }
    cout<<ans<<endl;
    
}
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

