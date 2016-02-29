#include <iostream>
#include <iomanip>
using namespace std;
#define N 12
int main()
{
    float balance[12];
    int i;
    float total=0.00;
    for(i=0;i<N;i++)
    {
        cin>>setprecision(2)>>balance[i];
    }
    for(i=0;i<N;i++)
    {
        total+=balance[i];
    }
    cout<<setprecision(2)<<fixed<<"$"<<total/N<<endl;//fixed 和setprecision的用法
}