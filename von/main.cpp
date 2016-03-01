#include <iostream>
using namespace std;
#define N 5
int main()
{
    int i,j,a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j+1]^a[j];
                a[j]=a[j]^a[j+1];
            }
        }
    }
    for(i=0;i<N;i++)
    {
        cout<<a[i];
    }
    return 0;
}
