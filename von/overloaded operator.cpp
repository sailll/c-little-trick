#include<iostream>
using namespace std;
class complex
{
public:
    double real;
    double image;
    void show()
    {
        cout<<"real is "<<real<<endl<<"image is "<<image<<endl;
    }
    complex(double r=0,double i=0)
    {
        real=r;
        image=i;
    }
};
complex operator+(const complex&a,const complex &b)
{
    complex t;
    t.real=a.real+b.real;
    t.image=a.image+b.image;
    return t;
}
int main()
{
    complex a(1,2);
    complex b(2,3);
    complex sum;
    sum=a+b;
    sum.show();
    return 0;
    
}