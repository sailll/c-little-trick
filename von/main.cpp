//
//  main.cpp
//  von
//
//  Created by 蔡仲谋 on 2/27/16.
//  Copyright © 2016 蔡仲谋. All rights reserved.
//
#include <iostream>
int main()
{
    using namespace std;
    int max(int a,int b);
    int loop;
    cin>>loop;
    int j;
    int num;
    int m[num];
    int count[loop];
    int i;
    for(i=0;i<loop;i++)
    {
        count[i]=0;
        cin>>num;
        for(j=0;j<num;j++)
        {
            cin>>m[j];
        }
        for(int s=0;s<num;s++)
        {
            int k=0;
            for(k=s+1;k<num;k++)
                if((m[s]^m[k])>max(m[s],m[k]))
                    count[i]++;
        }
    }
    for(i=0;i<loop;i++)
    {
        cout<<count[i]<<endl;
    }
    return 0;
}
int max(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}