#include <iostream>
#include <vector>
using namespace std;
void exchange(int &x,int &y){
    int tmp=x;
    x=y;
    y=tmp;
}
int partition(vector<int> &a,int bg,int ed){
    int sentin=a[ed];
    int i=bg-1;
    for(int j=bg;j<ed;++j){
        if(a[j]<sentin){
            ++i;
            exchange(a[i],a[j]);
        }
    }
    exchange(a[i+1],a[ed]);
    return i+1;
}
void quicksort(vector<int> &a,int bg,int ed){
    if(bg<ed){
        int mid=partition(a,bg,ed);
        quicksort(a,bg,mid-1);
        quicksort(a,mid,ed);
    }
}
int main(){
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int val;
        cin>>val;
        a.push_back(val);
    }
    quicksort(a, 0, n-1);
    for(int i=0;i<a.size();++i){
        cout<<a[i]<<" ";
    }
    return 0;
}