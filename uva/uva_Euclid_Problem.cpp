/*
 Author: uniqueinx
 uva: 10104 - Euclid Problem
*/

#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int gcd_sub(int a, int b){
	while (a != b){
		if (a > b)
			a -= b;
		else
			b -= a;
		}
	return a;
}
inline void extend_gcd(int a, int b){
    int x=0, y=1, lastx=1, lasty=0, t, quotient;
    while (b){
        quotient = a / b;
        t = b;        b = a % b;	       a = t;
        t = x;        x = lastx - quotient * x;        lastx = t;
        t = y;        y = lasty - quotient * y;        lasty = t;
        }
	cout << lastx << " " << lasty << " " << a << endl;
}
int main(){
	int a, b;
	freopen("input.txt", "r", stdin);
	while(cin>>a>>b){
		extend_gcd(a, b);
	}
	return 0;
}
