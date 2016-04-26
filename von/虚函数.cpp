#include <iostream>
#include <algorithm>
using namespace std;
class animal
{
public:
    int age;
    int max(int,int);
    
};
int animal::max(int a,int b)
{
    return a>b? a:b;
}
int main()
{
    animal dog;
    cout<<dog.max(3,6);
}