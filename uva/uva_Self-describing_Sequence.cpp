/*
author: uniqueinx
uva: 10049 - Self-describing Sequence
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;
#define SIZE 2000000001
#define LIMIT 100000000
unsigned int gol[LIMIT];
unsigned int gen(unsigned int n){
	unsigned int i = 0;
	while(gol[++i] < n);
	return i;
}
int main(){
	freopen("input.txt", "r", stdin);
	unsigned int n;
	gol[1] = 1;
	gol[2] = 3;
	for (unsigned int i = 3; gol[i-1] < SIZE; i++){
		gol[i] = gol[i-1] + gen(i);
		//cout<<"here"<<endl;
	}
	while(cin >> n && n)
		cout << gen(n)<<endl;
	return 0;
}
