/*
author: uniqueinx
spoj
8646. A Simple Game
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n = 0;
	long long number = 0;
	int counter = 0;

	while(cin>>n){
		for (int i = 0; i < n; i++){
			cin>>number;
			counter = 0;
			while (number > 0){
				if (number % 2 > 0)
					number = number -1;
				else
					number = number / 2;
				counter++;
			}
			if ((counter-1) % 2 > 0 || counter == 0)
				cout<<"Akash\n";
			else
				cout<<"Aayush\n";
		}
	}
	return 0;
}
