/*
author: uniqueinx
codeforces: cookies problem
*/
#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 1001
int main(){
	int power = 0;
	long long result = 0;
	while(cin>>power){
		result = 1;
		if (power < 2)
			result =1;
		else
		//result = (long long)pow(3.0,power-1);// % 1000003;
		for (int i = power; i >1; i--)
			result = result * 3 % 1000003;
			cout<<result<<"\n";
	}
	return 0;
}
/* note that here i uesd repeated mul instead of pow cause power gave me '-' result because of overflow as i guess
	so i made it do the remider each time so no overflow could happen but idk if that is right
*/
