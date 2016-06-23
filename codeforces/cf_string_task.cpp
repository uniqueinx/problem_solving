/*
author: uniqueinx
codeforces: A.string task
*/
#include <iostream>
#include <string>
using namespace std;
#define size 101

int main(){
	short weights[size] = {0};
	string vowels = "aAoOiIuUyYeE";
	string word = "";
	int len = 0;
	while(cin>>word){
		len =word.length();
		for (int i = 0; i < 12; i++){
			while(word.find(vowels[i]) < len)
				word.erase(word.find(vowels[i]),1);
		}
		len =word.length();
		for (int i = 0; i < len; i++){
			if(word[i] < 97)
				word[i] += 32;
		}
		for (int i = 0; i < len; i++)
			word.insert(2*i,".");
		cout<<word<<"\n";
	}
	return 0;
}
