/*
author: uniqueinx
codeforces: A.epic game
*/
#include <iostream>
#include <string>
using namespace std;
unsigned int gcd (unsigned int m,unsigned int n){
	if(m == 0 && n == 0)
		return 0;
	else if(m == 0)
		return n;
	else if (n == 0)
		return m;
	else if (m == n)
		return m;
	else
		if(m == 1 || n == 1)
			return 1;
		else {
			if(n > m ){
				int tmp = n;
				n = m;
				m = tmp;
			}
			return gcd(m % n, n);
		}
}
int main(){
	int a = 0, b = 0, heap = 0, counter = 0;
	bool turn = true;
	while(cin>>a>>b>>heap){
		turn = true;
		while(1){
			if(turn){
				turn = false;
				if (gcd(a,heap) <= heap)
					heap = heap - gcd(a, heap);
				else
					break;
			}
			else{
				turn = true;
				if (gcd(b,heap) <= heap)
					heap = heap - gcd(b, heap);
				else
					break;
			}
		}
		if(turn)
			cout<<"0\n";
		else
			cout<<"1\n";
	}
	return 0;
}
