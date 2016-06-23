#include <iostream>
using namespace std;
int main ()
{
	unsigned long long mul = 0,hold=0;
	unsigned long m,n,x;
	cin>>x;
	//for(int i = 0; i< x; i++){
		while(cin>>m>>n){
		while(n>0){
			hold = n & 1;
			if(hold != 0)
				mul += m;
			n = n >>1;
			m = m << 1;
		}
		cout<<mul<<endl;
		mul=0;
	}
	return 0;
}