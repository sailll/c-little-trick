#include <iostream>
#include <cmath>
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
};
int main()
{
    solution po;
    int n;
    cin>>n;
    po.primejudge(n);
    return 0;
}