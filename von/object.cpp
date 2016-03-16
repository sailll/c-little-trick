#include <iostream>
using namespace std;
#define N 5
class FUN
{
public:
	void input(int *pointer)
	{
		for(int i=0;i<N;i++)
		{
			cin>>*(pointer+i);
		}
	}
	void output(int *pointer)
	{
		for(int i=0;i<N;i++)
		{
			cout<<*(pointer+i)<<endl;
		}
	}
private:
	int xpos=0;
	int ypos=0;

};
int main()
{
	FUN io;
	int *p=new int[N];
    io.input(p);
    io.output(p);
    cout<<io.xpos<<endl;//error because it's private
    cout<<io.ypos<<endl;//the same
    return 0;
}