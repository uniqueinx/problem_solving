/*
author: uniqueinx
uva: 3n+1 problem
*/
#include <iostream>
using namespace std;
#define SIZE 500000

int main(){
	unsigned short table[SIZE] = {0};
	unsigned short temp,max=0;
	int n=0,low=0,high=0,a,b,note;
	while(cin>>a>>b){
		note= 0;
		if (a > b){
			high = a;
			low = b;
		}
		else {
			high =b;
			low = a ;
		}
		for(int i=low; i<=high; i++){
			n = i;
			if(table[i]> 0)
				temp = table[i];
			else {
				note++;
				temp = 0;
				while(n>1){
					temp++;
					if(n % 2 <= 0)
						n = n/2;
					else
						n = 3*n+1;
				}
				temp++;
				table[i] = temp;
			}
			if (temp > max){
				max = temp;
			}
			temp = 0;
		}
		cout<<a<<" "<<b<<" "<<max<<" "<<note<<"\n";
		max = 0;
	}
	return 0;
}
