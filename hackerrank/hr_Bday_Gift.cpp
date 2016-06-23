/*
Author: uniqueinx
hackerrank: B'day Gift
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,tmp;
	double out;

    while(cin>>n){
        x = 0;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            x += tmp;       
        }
        //out = (pow(2,(float)n-1) * x)/(pow(2,(float)n));
        out = x / 2.0;
        cout << setprecision(1) << fixed << out << endl;//fixed percision 
    }
    return 0;
}
