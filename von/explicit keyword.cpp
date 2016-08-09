#include<iostream>
#include<utility>
#include<queue>
using namespace std;
class B{
public:
    int x;
    B(int i=23){
        this->x=i;
    }
    //using explicit keyword will disable the inexplicit conversion mechanism
};
void output(B ob){
    cout<<ob.x<<endl;
}
int main(){
    char s='2';
    output(s);
    return 0;
}
