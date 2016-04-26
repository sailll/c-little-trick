#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string fun(string &a)
{
    string ret=a;
    return ret;
}
class animal
{
public:
    int age;
    char name[20];
};
class dog:public animal
{
public:
    char dog_food[10];
    int dogl;
};
int main()
{
    string a("hello world");
    cout<<fun(a)<<endl;
    dog *me;
    me->age=3;
    me->dogl=4;
    animal *you=dynamic_cast<animal*>(me);
    cout<<you->age<<endl;

}