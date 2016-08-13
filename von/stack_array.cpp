#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
class stack{
private:
    static const int len=3;
    int a[len];
    int top=-1;
public:
    bool isStackEmpty(){
        if(top==-1) return true;
        else return false;
    }
    void push(int x){
        if(top==len-1){
            printf("stackoverflow\n");
            return;
        }
        else{
            ++top;
            a[top]=x;
        }
    }
    int pop(){
        if(isStackEmpty()){
            printf("underflow\n");
            return -1;
        }
        else{
            --top;
            return a[top+1];
        }
    }
};
int main(){
    stack d;
    d.push(9);
    d.push(5);
    d.push(7);
    d.push(6);
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;
    cout<<d.isStackEmpty()<<endl;
    return 0;
}