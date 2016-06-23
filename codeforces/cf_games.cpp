/*
author: uniqueinx
codeforces: games problem
*/

#include <iostream>
using namespace std;
#define SIZE 30

int main(){
	int teams =0;
	int home[SIZE] = {0};
	int guest[SIZE] = {0};
	int count = 0;
	while(cin>>teams){
		count = 0;
		for(int i = 1; i<= teams; i++){
			cin>>home[i]>>guest[i];
		}

		for (int i = 1; i <= teams; i++){
			for (int j = 1; j <= teams; j++){
				if (j != i){
				if (home[i] == guest[j])
					count++;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
