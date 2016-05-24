#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
class Solution
{
public:
    void matrics_multiplication(int m,int n,int l)
    {
        vector<vector<int>> matric1;
        vector<vector<int>> matric2;
        vector<vector<int>> ans;
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
            matric1.push_back(tmp);
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
            matric2.push_back(tmp);
        }
        for(int v=0;v<m;++v)
        {
            vector<int> tmp;
            for(int k=0;k<l;++k)
            {
                int tmp_total=0;
                for(int i=0;i<n;++i)
                {
                    
                    tmp_total+=matric1[v][i]*matric2[i][k];
                    
                }
                tmp.push_back(tmp_total);
            }
            ans.push_back(tmp);
        }
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
    int m,n,j;
    scanf("%d%d%d",&m,&n,&j);
    solve.matrics_multiplication(m,n,j);
    return 0;
}