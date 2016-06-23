/*
author: uniqueinx
codeforces: team problem
*/
#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 1001
int main(){
	int ind [SIZE] = {0};
	int problems = 0;
	int solutions = 0;
	int a = 0, b = 0, c = 0;

	while(cin>>problems){
		for (int i = 0; i < problems; i++){
			cin>>a>>b>>c;
			if(a +b +c > 1)
				solutions++;
		}
		cout<<solutions<<"\n";
		solutions = 0;
	}
	return 0;
}
