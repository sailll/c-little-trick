#include <iostream>
using namespace std;
#define N 5
int m()
{
    int a[N];
    int i;
    for(i=0;i<N;i++)
    {
        cout<<"the "<<i+1<<"th of the array is ?"<<endl;
        cin>>a[i];
    }
    int j;
    int key;
    for(j=1;j<N;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i--;
            a[i+1]=key;
        }
    }
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
