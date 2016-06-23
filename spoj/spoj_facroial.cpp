/*
author: uniqueinx
spoj
factorial
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int testcases = 0;
	int result = 0;
	int number  = 0;
	while(cin>>testcases){
		for (int i = 0; i < testcases; i++){
			cin>>number;
			result = 0;
			while (number > 4){
				number = number / 5;
				result += number;
			}
			cout<<result<<"\n";
		}
	}
	return 0;
}
