#include <iostream>
using namespace std;// std;
#define N 5
int fun(int *pointer);
int main()
{
	int a[N];
	int *pointer=a;
	int i;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N;i++)
	{
        *(pointer+i)=fun(pointer+i);
	}
	for(i=0;i<N;i++)
	{
		cout<<*(pointer+i)<<endl;
	}
	return 0;   
}
int fun(int *pointer)
{
	int tem=*(pointer);
	int i;
	for(i=0;i<N;i++)
	{
		if(*(pointer+i)<temp)
			temp=*(pointer+i);    
	}
	return temp;
}
