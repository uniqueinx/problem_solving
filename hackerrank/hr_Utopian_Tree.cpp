/* 
Author: uniqueinx
hackerrank: Utopian Tree
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,out;
    while(cin>>t){
        for(int i = 0; i < t; i++){
            cin>>n;
            out = 1;
            for(int j = 1; j <= n; j++){
                if(j % 2 != 0)
                    out *= 2;
                else
                    out += 1;  
            }
            cout<<out<<endl;
        }    
    }
    return 0;
}
