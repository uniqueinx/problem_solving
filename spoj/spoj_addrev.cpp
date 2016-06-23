/*
author: uniqueinx
spoj
42. Adding Reversed Numbers
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int n = 0;
	string a = "", b = "", r = "";
	int aa = 0, bb = 0, rr = 0;
	bool flag = false;
	while(cin>>n){
		for (int i = 0; i < n; i++){
			cin>>a>>b;
			a = string (a.rbegin(), a.rend());
			b = string (b.rbegin(), b.rend());
			if(!(istringstream(a)>>aa))
				aa = 0;
			if(!(istringstream(b)>>bb))
				bb = 0;
			rr = aa + bb;
			r = static_cast<ostringstream*>( &(ostringstream() << rr) )->str();
			r = string (r.rbegin(), r.rend());
			while(! flag){
				if(r[0] == '0')
					r = r.erase(0,1);
				else
					flag = true;
			}
			flag = false;
			cout<<r<<"\n";
		}
	}
	return 0;
}
