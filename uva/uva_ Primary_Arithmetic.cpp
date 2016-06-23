/*
author: uniqueinx
uva: 10035 - Primary Arithmetic
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	ifstream inputfile ("input.txt");
	int counter, carry;
	string a,b;

	while(inputfile>>a>>b){
		if(a == "0" && b == "0")
			break;
		string d1 ,d2;
		counter = 0;
		carry = 0;
		d1 = d2 = "0000000000";
		for (int i = a.length()-1, j = 9; i >= 0; i--)
			d1[j--]+=(a[i] - '0');
		for (int i = b.length()-1, j = 9; i >= 0; i--)
			d2[j--]+=(b[i] - '0');
		for (int i = 9; i >= 0; i--){
			if((d1[i] - '0' + d2[i] - '0' + carry) > 9){
				counter++;
				carry = 1;
			}else	{
				carry = 0;
			}
		}
		if(counter == 0)
			cout<< "No carry operation.\n";
		else if (counter == 1)
			cout<<"1 carry operation.\n";
		else
			cout<< counter << " carry operations.\n";
	}
	return 0;
}
