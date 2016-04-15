#include <iostream>
#include <vector>
#include <iostream>
#include <time.h>
using namespace std;
class game
{
public:
    vector<int> a;
    void judge(int myans,int aians)
    {
        if(aians==myans)
        {
            cout<<"no winner"<<endl;
            return;
        }
        if(aians==2&&myans==0)
        {
            win();
            return;
        }
        if(aians==0&&myans==2)
        {
            lose();
            return;
        }
        for(int i=0;i<3;i++)
        {
            if(aians==i)
            {
                if(myans==i+1)
                {
                    win();
                    return;
                }
                if(myans==i-1)
                {
                    lose();
                    return;
                }
            }
        }
    }
    int make()
    {
        int re;
        srand((unsigned) time(NULL));
        re = rand() % 3;
        return re;
    }
    void output()
    {
        int len=a.size();
        for(int i=0;i<len;i++)
            {
                if(a[i]==1)
                {
                    cout<<"win"<<" ";
                }
                else cout<<"lose "<<" ";
            }
            
            }
            private:
            void win()
            {
                cout<<"you win"<<endl;
                a.push_back(1);
            }
            void lose()
            {
                cout<<"you lose"<<endl;
                a.push_back(0);
            }
            
            
            };
int main()
{
    int myans;
    cin>>myans;
 game ai;
 game me;
 ai.judge(myans,ai.make());
 ai.output();
}