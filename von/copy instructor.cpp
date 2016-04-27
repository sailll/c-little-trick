#include<iostream>
using namespace std;
class complex
{
private:
    double real;
    double image;
public:
    void show()
    {
        cout<<"real is "<<real<<endl<<"image is "<<image<<endl;
    }
    complex(const complex&a)
    {
        real=a.real;
        image=a.image;
    }
    complex(double r=0,double i=0)
    {
        real=r;
        image=i;
    }
    complex operator+(const complex &op);
    
};
complex complex::operator+(const complex&op)
{
    complex t;
    t.real=real+op.real;
    t.image=image+op.image;
    return t;
}
int main()
{
    complex a(1,2);
    complex a1(a);
    complex b(2,3);
    complex sum;
    sum=a1+b;
    sum.show();
    return 0;
}