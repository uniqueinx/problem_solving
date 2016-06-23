/*
author: uniqueinx
uva: 10026 - Shoemaker's Problem
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
struct job{
	double rtime;
	int pos;
};
bool compare (job a, job b){
	if(a.rtime == b.rtime )
		return a.pos < b.pos;
	else
		return a.rtime > b.rtime;
}
int main1(){
	ifstream inputfile ("input.txt");
	string line;
	vector <job> vec;
	int cases = 0, N = 0;
	double f, t;
	job tmp;
	inputfile>> cases;
	for(int k = 0; k < cases; k++){
		getline(inputfile,line);
		inputfile>> N;
		for(int i = 0; i < N; i++){
			inputfile >> t >> f;
			tmp.rtime  = f / t * 100;
			tmp.pos = i+1;
			vec.push_back(tmp);
		}
		sort(vec.begin(), vec.end(), compare);
		for(int i = 0; i < N; i++){
			cout<<vec[i].pos;
			if (i != N-1)
				cout << " ";
		}
		cout<<endl;
		vec.clear();
		if (k != cases-1) cout << endl;
	}
	return 0;
}
