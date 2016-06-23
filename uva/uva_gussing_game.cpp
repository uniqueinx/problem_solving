/*
author: uniqueinx
uva: 10530 - guessing game 
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int n,high = 11,low = 0;
	string a;
	while(cin >> n && n){
		cin>> a >> a;
		//cout << a << ' ' << b <<endl;
		if (a[0] == 'o'){
			if(n > low && n < high)
				cout<<"Stan may be honest\n";
			else
				cout<<"Stan is dishonest\n";
			high = 11;
			low = 0;
		}else if (a[0] == 'h'){
				high = n < high ? n : high;
		}else{
				low = n > low ? n : low;
		}
	}
	return 0;
}
