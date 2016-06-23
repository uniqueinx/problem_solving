/*
 Author: uniqueinx
 uva: 11728 - Alternate Task
*/

#include <iostream>
using namespace std;
#define SIZE 1001
int main(){
	unsigned int sums[SIZE] = {0};
	int n, out;
	for(int i = 0; i < SIZE; i++){
		//cout<<sums[i]<<endl;
	}
	for(int i = 1; i < SIZE; i++){
		for(int j= 1; j <= i; j++){
			if(i % j == 0)
				sums[i] += j;
		}
	}
	int counter = 0;
	while(cin>>n && n){
		bool found = false;
		for(int i = SIZE-1; i > 0; i--){
			if(sums[i] == n){
				out = i;
				found = true;
				break;
			}
		}
		if(!found)
		out = -1;
		cout << "Case "<< ++counter<<": "<< out << endl;
	}

	return 0;
}
