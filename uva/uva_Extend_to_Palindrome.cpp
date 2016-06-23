/*
author: uniqueinx
uva	11475 - Extend to Palindrome
*/
#include <iostream>
#include <string>
#include<fstream>
#include <algorithm>
#include <cmath>

using namespace std;
#define mod 1000000007LL
#define base 2096725343LL
string rev(string& s, int from, int to){
	string tmp = "";
	for(int i = to; i >= from; i--)
		tmp += s[i];
	return tmp;
}

int main(){
	string word;
	ifstream input ("input.txt");
	while(input >> word){
		unsigned long long h1 = 0, h2 = 0;
		unsigned int best = 0, len = 0;
		len = word.length()-1;
		unsigned long long power = 1;
		for (int i = len; i >= 0; i--){
			//need a better way to get hash
			h1 =(h1 + word[i] * power) % mod;
			h2 = (h2 * base + word[i]) % mod;
			power = (power * base) % mod ;
			if(h1 == h2)
				best = i;
		}
		cout<< word << rev(word, 0, best - 1) << endl;
	}
	return 0;
}
