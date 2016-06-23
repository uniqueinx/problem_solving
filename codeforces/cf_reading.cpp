/*
author: uniqueinx
codeforces: reading problem
*/
#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 1001
struct my{
	int index;
	int value;
};
bool comp (my x, my y){
	return  x.value > y .value ? true : false;
}
int main(){
	my lights [SIZE];
	int ind [SIZE] = {0};
	int n = 0;
	int k = 0;
	for (int i = 0; i < SIZE; i++){
		lights[i].index = i;
		lights[i].value = 0;
	}
	while(cin>>n>>k){
		for (int i = 1; i<= n; i++){
			cin>>lights[i].value;
			lights[i].index = i;
		}
		sort(lights+1, lights+n+1,comp);
		for (int i = 0; i < k; i++)
			ind[i] = lights[i+1].index;
		sort(ind,ind+k);
		cout<<lights[k].value<<"\n";
		for (int i = 0; i < k; i++)
			cout<<ind[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
