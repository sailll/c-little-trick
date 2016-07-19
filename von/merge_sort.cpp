#include <cstdio>
#include <vector>
using namespace std;
class Solution{
public:
    static void divide_conquer(vector<int> &array){
        if(array.size()>1){
            vector<int> L;
            vector<int> R;
            for(int i=0;i<array.size()/2;++i){
                L.push_back(array[i]);
            }
            for(int i=array.size()/2;i<array.size();++i){
                R.push_back(array[i]);
            }
            divide_conquer(L);
            divide_conquer(R);
            for(int i=0;i<array.size();i++){
                array[i]=merge(L,R)[i];
            }
            
        }
        else return ;
    }
    static void insertion(vector<int> &subarray){
        for(int i=0;i<subarray.size()-1;++i){
            for(int k=i+1;k>0&&subarray[k]<subarray[k-1];--k){
                subarray[k]=subarray[k]^subarray[k-1];
                subarray[k-1]=subarray[k-1]^subarray[k];
                subarray[k]=subarray[k]^subarray[k-1];
            }
        }
    }
    static void output(vector<int> &a){
        for(int i=0;i<a.size();++i){
            printf("%d ",a[i]);
        }
    }
    static vector<int> merge(vector<int> &L,vector<int> &R){
        L.push_back(9999999);
        R.push_back(9999999);
        vector<int> ANS;
        int iofL=0;
        int iofR=0;
        for(int k=0;k<L.size()+R.size()-2;++k){
            if(L[iofL]<=R[iofR]){
                ANS.push_back(L[iofL]);
                ++iofL;
            }
            else{
                ANS.push_back(R[iofR]);
                ++iofR;
            }
        }
        return ANS;
        
    }
    
};
int main()
{
    int n;
    scanf("%d",&n);
    vector<int> a;
    for(int i=0;i<n;++i){
        int tmp;
        scanf("%d",&tmp);
        a.push_back(tmp);
    }
    Solution::divide_conquer(a);
    Solution::output(a);
    return 0;
}