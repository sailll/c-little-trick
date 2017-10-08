#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

#define MAX_N 1000
int par[MAX_N];
int height[MAX_N];

void init(int n){
	for(int i=0;i<n;++i){
		par[i]=i;
	}
}

int find(int x){
	if(par[x]==x){
		return x;
	}
	else{
		return par[x]=find(par[x]);
	}
}

void unite(int x,int y){
	x=find(x);
	y=find(y);

	if(x==y){
		return;
	}

	if(height[x]<height[y]){
		par[x]=y;
	}else{
		par[y]=x;
		if(height[x]==height[y]) ++height[x];
	}
}

bool same(int x,int y){
	return find(x)==find(y)?true:false;
}
int main(){
	init(10);
	cout<<same(0,1)<<endl;
	unite(0,1);
	cout<<same(0,1)<<endl;
	return 0;
}