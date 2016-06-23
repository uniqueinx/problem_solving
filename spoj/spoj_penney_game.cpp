/*
author: uniqueinx
spoj
8612. Penney Game
*/
#include <iostream>
#include <string>
using namespace std;
#define string_size 40

int main(){
	string sequences [] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	string current = "";
	string tmp = "";
	int index = 0;
	int n = 0;
	int cases [8] = {0};
	int len = string_size - 2;
	while(cin>>n){
		for (int i = 0; i < n; i++){
			cin>>index>>current;
			for (int j = 0; j <len; j++){
				for (int k = 0; k < 8; k++){
					if (current.compare(j, 3,sequences[k]) == 0)
						cases[k]++;
				}
			}
			cout<<index<<" ";
			for (int k = 0; k < 8; k++){
				cout<<cases[k]<<" ";
				cases[k] = 0;
			}
			cout<<"\n";
		}
	}
	return 0;
}
