#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class v
{
public:
    void input(int &a,int &b)
    {
        cin>>a>>b;
    }
    void max(int a,int b)
    {
        if(a>=b)
            cout<<"a "<<a<< " is bigger"<<endl;
        else  cout<<"b "<<b<<" is bigger"<<endl;
    }
    
};
int main()
{
    int a=0,b=0;
    v ray;
    ray.input(a,b);
    ray.max(a,b);
    return 0;
}
