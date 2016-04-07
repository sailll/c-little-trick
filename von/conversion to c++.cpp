#include <iostream>
#include <vector>
using namespace std;
const int n=40;
class solution
{
public:
	inline void sum(int &sum,vector<int> &ar)
	{
        sum=0;
        for(int i=0;i<n;i++)
        {
        	sum+=sum+ar[i];
        }
	}
};
int main()
{
	vector<int> ar;
	for(int i=0;i<n;i++)
    {
    	ar.push_back(i);
    }
    solution so;
    int sum=0;
    so.sum(sum,ar);
    cout<<"sun is "<<sum<<endl;
    return 0;
}