#include<iostream>
#include<string>
using namespace std;
bool comp(string x, string y){
	for (int i = x.length()-1,j=0; i>=0; i--,j++){
		if(y[j] != x[i])
			return false;
	}
	return true;
}
int main (){

	string s,t;
	while(cin>>s>>t){
		if(comp(s,t))
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
	return 0;
}