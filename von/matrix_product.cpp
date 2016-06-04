#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
class Solution
{
public:
    void matrix_product(vector<vector<int>> &a,vector<vector<int>> &b,int n)
    {
        vector<vector<int>> ans;
        for(int i=0;i<n;++i)
        {
            vector<int> tmp;
            for(int j=0;j<n;++j)
            {
                int cval;
                for(int k=0;k<n;++k)
                {
                    if(a[i][k]&&b[k][j])
                    {
                        cval=1;
                        break;
                    }
                    else
                    {
                        cval=0;
                    }
                }
                tmp.push_back(cval);
            }
            ans.push_back(tmp);
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
        
        
    }
    void input(vector<vector<int>> &a,vector<vector<int>> &b,int n)
    {
        printf("please enter two matrix,now enter the first one\n");
        for(int i=0;i<n;++i)
        {
            vector<int> tmp;
            for(int j=0;j<n;++j)
            {
                int cval;
                scanf("%d",&cval);
                tmp.push_back(cval);
            }
            a.push_back(tmp);
        }
        printf("now enter the second one\n");
        for(int i=0;i<n;++i)
        {
            vector<int> tmp;
            for(int j=0;j<n;++j)
            {
                int cval;
                scanf("%d",&cval);
                tmp.push_back(cval);
            }
            b.push_back(tmp);
        }
        
        
    }
    
    
};
int main()
{
    int n;
    scanf("%d",&n);
    vector<vector<int>> a;
    vector<vector<int>> b;
    Solution solve;
    solve.input(a,b,n);
    solve.matrix_product(a,b,n);
    return 0;
    
}