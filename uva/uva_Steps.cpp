/*
author: uniqueinx
uva: 846 - Steps
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define SIZE 2147483648
int main(){
	ifstream inputfile ("input.txt");
	int n;
	inputfile>>n;
	unsigned int a, b;
	int out, out2;
	for(int k =0; k < n; k++){
		inputfile>>a>>b;
		int distance = b - a;
		if(distance == 0){
			out = 0;
			//out2 = 0;
		}
		else {
			double tmp = sqrt((double)distance);
			double i = floor(tmp + 0.5);
			double ii = ceil(tmp);
			if(ii == i)
				out = 2*i-1;
			else
				out = 2*i;
			//out2 = floor(sqrt((double) 4*distance-1));
		}
		cout<< out << endl;
	}
	return 0;
}
