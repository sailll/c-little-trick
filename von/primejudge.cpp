#include <iostream>
#include <cmath>
#include <string>
#define N 5
using namespace std;
class solution
{
public:
    void primejudge(int a)
    {
        int i=a;
        while(i>2)
        {
            i--;
            if((a%i)==0)
            {
                cout<<"this is not prime number"<<endl;
                return ;
            }
        }
        cout<<"this is a prime number"<<endl;
        return ;
    }
    void change(char *b)
    {
        for(int i=0;i<N;i++)
        {
            if(*(b+N-i-1)<=90)
            {
                *(b+N-i-1)+=32;
                cout<<*(b+N-i-1)<<endl;
            }
            else
            {
                *(b+N-i-1)-=32;
                cout<<*(b+N-i-1)<<endl;
            }
        }
    }
};
int main()
{
    solution po;
    int n;
    char *b=new char[N];
    cin>>n;
    po.primejudge(n);
    for(int i=0;i<N;i++)
    {
        cin>>*(b+i);
    }
    po.change(b);
    delete []b;
    return 0;
}
