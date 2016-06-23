/*
author: uniqueinx
codeforces: A.way too long words
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	short n = 0;
	string word = "";
	string print = "";
	while(cin>>n){
		for (int i = 0; i < n; i++){
			cin>>word;
			if (word.length() > 10)
				cout<<word[0]<<word.length()-2<<word[word.length()-1]<<"\n";
			else
				cout<<word<<"\n";
		}
	}
	return 0;
}
