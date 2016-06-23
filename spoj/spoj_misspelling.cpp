/*
author: uniqueinx
spoj
2523. Mispelling problem
*/
#include <iostream>
#include <string>
using namespace std;
#define size 10001

int main(){
	string set[size];
	int n = 0;
	int pos = 0;

	while(cin>>n){
		for (int i = 1; i <= n; i++){
			cin>>pos>>set[i];
			pos--;
			set[i] = set[i].erase(pos,1);
		}
		for (int i = 1; i <= n; i++){
		cout<<i<<" "<<set[i]<<"\n";
		}
	}
	return 0;
}
