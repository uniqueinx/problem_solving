/*
author: uniqueinx
uva: 10018 - Reverse and Add
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	ifstream inputfile ("input.txt");
	int N;
	string word, reword;

	while(inputfile>>N){
		for (int i = 0; i < N; i++){
			int c = 0;
			inputfile>>word;
			reword = "";
			reword = word;
			reverse(reword.begin(), reword.end());

			do{
				unsigned long long tmp,x,y;
				stringstream s1,s2;
				s1.str(word);
				s1 >> x;
				s1.clear();
				s2.str(reword);
				s2 >> y;
				s2.clear();
				tmp = x + y;
				s1.str("");
				s1 << tmp;
				word = s1.str();
 				reword = word;
				reverse(reword.begin(), reword.end());
				c++;
			}
			while(word != reword);
			cout << c << " " << word << endl;
		}
	}
	return 0;
}
