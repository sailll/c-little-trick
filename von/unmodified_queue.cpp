#include <iostream>
#include <cstdio>
using namespace std;
template<class T>class queue{
private:
    static const int len=6;
    T a[len];
    int tail=3;
    int head=3;
public:
    void enqueue(T x){
        a[tail]=x;
        if(tail==len-1){
            tail=0;
        }
        else ++tail;
    }
    T dequeue(){
            int x=a[head];
            if(head==len-1) head=0;
            else ++head;
            return x;
    }
    bool isQueueEmpty(){
        if(head==tail) return true;
        else return false;
    }
};
int main()
{
    queue<int> a;
    for(int i=1;i<=7;++i){
        a.enqueue(i);
    }
    for(int i=0;i<6;++i){
        cout<<a.dequeue()<<endl;
    }
    return 0;
    
}