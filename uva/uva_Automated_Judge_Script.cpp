/*
author: uniqueinx
uva: 10188 - Automated Judge Script
*/
#include <iostream>
#include <string>
using namespace std;
#define size 100
bool get_numrics(string& s1, string& s2){
	string tmp1 = "",tmp2 = "";
	for(unsigned int i = 0; i < s1.length(); i++)
		if(s1[i]>= '0' && s1[i] <= '9')
			tmp1 += s1[i];

	for(unsigned int i = 0; i < s2.length(); i++)
		if(s2[i]>= '0' && s2[i] <= '9')
			tmp2 += s2[i];

	if(tmp1.length() != tmp2.length()){
		return false;
	}else{
		for (unsigned int i = 0; i < tmp1.length(); i++){
			if(tmp1[i] != tmp2[i])
				return false;
		}
		return true;
	}
}

bool get_acc(string& s1, string& s2){
	if(s1.length() != s2.length())
		return false;
	for (unsigned int i = 0; i < s1.length(); i++)
		if(s1[i] != s2[i])
			return false;
	return true;
}

int main(){
	string run = "Run #";
	string ac = ": Accepted";
	string pe = ": Presentation Error";
	string wa = ": Wrong Answer";
	string a ="" ,b = "";
	string in,team;
	unsigned int counter = 1, n = 0, m = 0;
	bool acc, pee, waa;

	while(cin>>n){
		if (n == 0)
			break;
		//getting input
		a = "";
		b = "";
		for (unsigned int i = 0; i < n+1; i++){
			getline(cin,in);
			a += in;
			a += '\n';
		}
		cin>>m;
		for (unsigned int i = 0; i < m+1; i++){
			getline(cin,team);
			b += team;
			b += '\n';
		}
		//processing
		acc = pee = waa = false;
		acc = get_acc(a,b);
		if(acc)
			cout<<run<<counter++<<ac<<endl;
		else{
			pee = get_numrics(a,b);
			if(pee)
				cout<<run<<counter++<<pe<<endl;
			else
				cout<<run<<counter++<<wa<<endl;
		}
	}
	return 0;
}
