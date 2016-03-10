#include <iostream>
using namespace std;
#define N 5
int main()
{
    void input(int *pointer);
    int max(int *pointer);
    int *pointer;
    pointer=(int *)malloc(N * sizeof(int));
    if(pointer==NULL)
    {
        cerr<<"the pointer is null"<<endl;
    }
    input(pointer);
    cout<<max(pointer)<<" is the biggest number"<<endl;
    free(pointer);
    return 0;
}
void input(int *pointer)
{
    for(int i=0;i<N;i++)
    {
        cin>>*(pointer+i);
    }
}
int max(int *pointer)
{
    for(int i=0;i<N;i++)
    {
        if(*(pointer+i)>*(pointer+i+1))
        {
            *(pointer+i)=*(pointer+i)^*(pointer+i+1);
            *(pointer+i+1)=*(pointer+i+1)^*(pointer+i);
            *(pointer+i)=*(pointer+i)^*(pointer+i+1);
        }
    }
    return *(pointer+N-1);
}

