#include <iostream>
#include <vector>
#define PAI 3.14
using namespace std;
template<class T>class solution
{
public:
    vector<T> a;
    void input()
    {
        int n;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            float in;
            cin>>in;
            T cval(in);
            a.push_back(cval);
        }
    }
    void compare(vector<T> &a)
    {
        auto len=a.size();
        float tmp=a[0].radius;
        int key=0;
        for(int i=0;i<len;++i)
        {
            if(a[i].radius>tmp)
            {
                tmp=a[i].radius;
                key=i;
            }
        }
        cout<<a[key].getarea()<<endl;
    }
    
};
class Circle
{
public:
    Circle(float r)
    {
        radius=r;
    }
    ~Circle();
public:
    float radius;
    float getarea()
    {
        float area;
        area=radius*radius*PAI;
        return area;
    }
};
int main()
{
    solution<Circle> solve;
    solve.input();
    solve.compare(solve.a);
    return 0;
}