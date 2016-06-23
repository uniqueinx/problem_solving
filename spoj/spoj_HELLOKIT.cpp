/*
author: uniqueinx
spoj
5132. Hello Kitty
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string word = "love";
	int repeat = 0;
	int n = 0;
	string toprint = "";
	while(cin>>word>>repeat){
		toprint = word;
		n = word.length();
		for (int i = 0; i < n; i++){
			for (int j = 0; j < repeat; j++){
				cout<<toprint;
			}
			cout<<"\n";
			toprint.append(toprint,0,1);
			toprint.erase(0,1);
		}
	}
	return 0;
}
