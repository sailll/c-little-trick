#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
void exchange(int &x,int &y){
    int tmp=x;
    x=y;
    y=tmp;
}
int partition(vector<int> &ar,int bg,int ed){
    int sen=ar[ed];
    int index=bg-1;
    for(int i=bg;i<ed;++i){
        if(ar[i]<sen){
            ++index;
            exchange(ar[index],ar[i]);
        }
    }
    ++index;
    exchange(ar[index],ar[ed]);
    return index;
}
void quicksort(vector<int> &ar,int bg,int ed){
    if(bg<ed){
        int mid=partition(ar,bg,ed);
        quicksort(ar,bg,mid-1);
        quicksort(ar,mid,ed);
    }
}
void input(vector<int> &a){
    int n=a.size();
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
}
void output(vector<int> &a){
    int n=a.size();
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    input(a);
    quicksort(a,0,n-1);
    output(a);
    return 0;
}