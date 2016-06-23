/*
author: uniqueinx
uva: 11475 - Extend to Palindrome
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
using namespace std;
//buble_sort
inline void sel_sort (int arr[], int size){
	int n = size;
	int newn;
	int tmp;
	while(n > 0){
		newn = 0;
		for (int i = 1; i < n; i++){
			if (arr[i-1] > arr[i]){
				tmp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = tmp;
				newn = i;
			}
		}
		n = newn;
	}
}
int main(){
	ifstream inputfile ("input.txt");
	string line;
	int stack [31], sort [31];
	int counter, tmp;

	while(getline(inputfile,line)){
		stringstream s;
		counter = 0;
		s.str(line);
		cout<<line << endl;
		while(s>>tmp){
			stack[counter] = sort[counter] = tmp;
			counter++;
		}
		sel_sort(sort,counter);
		//reverse(sort,sort+4);
		for(int i = counter-1; i >= 0; i--){
			int max = sort[i];
			for (int j = counter-1; j >= 0; j--){
				if(stack[j] == max){
					if(i != j){
						if(j != 0){
							cout<< counter - j << " ";
							//+1 or -1
							reverse(stack, (stack + j+1));
						}
						cout<< counter - i << " ";
						reverse(stack, (stack +i+1));
					}
					break;
				}
			}
		}
		cout << "0"<< endl;
	}
	return 0;
}
