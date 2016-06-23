/*
author: uniqueinx
uva: 10252 - Common Permutation
*/
#include <iostream>
#include <string>
using namespace std;
#define size 256
void str_sort (string& s){
	char tmp;
	for(unsigned int i=0; i<s.length(); i++){
		for (unsigned int j=i+1; j<s.length(); j++){
			if (s[i] > s[j]){
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}
}
int main(){
	//char a[1005],b[1005];
	string a,b;
	string x;
	unsigned int arr[size] = {0};
	unsigned int arr2[size] = {0};
	unsigned int tmp;

	while(getline(cin,a) && getline(cin,b)){
		for (unsigned int i = 0; i < size; i++){
			arr[i] = arr2[i] = 0;
		}
		for (unsigned int i = 0; i < a.length();i++){
			arr[a[i]]++;
		}
		for (unsigned int i = 0; i < b.length(); i++){
			arr2[b[i]]++;
		}
		for (unsigned int i = 0; i < size; i++){
			tmp = (arr[i]<arr2[i])?arr[i]:arr2[i];
			while(tmp-->0)
				x += (char)(i);
		}
		cout<< x << endl;
		x = "";
	}
	return 0;
}
