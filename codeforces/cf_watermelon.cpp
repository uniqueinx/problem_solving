/*
author: uniqueinx
codeforces: A.watermelon
*/
#include <iostream>
#include <string>
using namespace std;
#define size 101

int main(){
	short weights[size] = {0};
	short watermelon = 0;
	for(int i = 4; i < size; i+=2)
		weights[i] = 1;
	while(cin>>watermelon){
		if (weights[watermelon] > 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
