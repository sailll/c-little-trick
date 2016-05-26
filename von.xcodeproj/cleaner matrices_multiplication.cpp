#include <iostream>
#include <vector>
#include <string>
using namespace  std;
class Solution
{
public:
    void matrices_multiplication(vector<vector<int>> &a,vector<vector<int>> &b,vector<vector<int>> &ans,int &m,int &n,int &l)
    {
        for(int i=0;i<m;++i)
        {
            vector<int> tmp;
            for(int j=0;j<l;++j)
            {
                int tmp_total=0;
                for(int k=0;k<n;++k)
                {
                    tmp_total+=a[i][k]*b[k][j];
                }
                tmp.push_back(tmp_total);
            }
            ans.push_back(tmp);
        }
        
    }
    void input(vector<vector<int>> &a,vector<vector<int>> &b,int &m,int &n,int &l)
    {
        printf("enter the size of the two matrices that can be multiplied\n");
        scanf("%d%d%d",&m,&n,&l);
        printf("enter the first matric\n");
        for(int i=0;i<m;++i)
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
        printf("enter the second matric\n");
        for(int i=0;i<n;++i)
        {
            vector<int> tmp;
            for(int j=0;j<l;++j)
            {
                int cval;
                scanf("%d",&cval);
                tmp.push_back(cval);
            }
            b.push_back(tmp);
        }
    }
    void output(vector<vector<int>> &ans,int &m,int &l)
    {
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<l;++j)
            {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    
};

int main()
{
    Solution solve;
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<vector<int>> ans;
    int m,n,l;
    solve.input(a,b,m,n,l);
    solve.matrices_multiplication(a,b,ans,m,n,l);
    solve.output(ans,m,l);
    return 0;
}
