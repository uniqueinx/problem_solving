/*
author: uniqueinx
uva: 10110 - Light, more light
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
//#define SIZE 2147483648
//FILE* stream;
int main(){
	//freopen_s(&stream, "input.txt", "r", stdin);
	unsigned int n = 1;
	double sq;
	while(scanf("%u",&n) && n){
		sq = sqrt(double(n));
		printf("%s\n",(ceil(sq) == floor(sq) ? "yse":"no"));
	}
	return 0;
}
