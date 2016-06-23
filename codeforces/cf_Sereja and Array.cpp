/*
author: uniqueinx
codeforces: 315B - Sereja and Array
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int m = 0;
	int n = 0;
	int t = 0;
	int pos = 0;
	int arry [100000];
	int r = 0,l = 0;
	int inc = 0;
	int plus = 0;

	while(cin>>n>>m){
		for (int i =0; i< n; i++)
			cin>>arry[i];
			plus = 0;
		for (int i =0; i< m; i++){
			cin>>t;

			if(t == 1){
				cin>> l>>r;
				arry[l-1] = r - plus;
			}

			else if(t == 2){
				cin>>inc;
				plus += inc;
			}

			else{
				cin>> pos;
				cout<<arry[pos-1] + plus<<endl;
			}
		}
	}
	return 0;
}
