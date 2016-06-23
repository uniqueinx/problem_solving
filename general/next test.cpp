#include<iostream>
#include<algorithm>
using namespace std;
void next(int N){
	int min;
	if(N == 0){
		cout<<1<<endl;
		return;
	}
	int* arr = new int [N];
	for (int i = 0; i<N; i++){
		cin>>arr[i];
	}
	sort (arr, arr+N);
	min = arr[0];
	for(int i = 1; i < arr[0]; i++){
	cout<<i;
	return;
	}

	for (int i = 0; i<N-1; i++){
		if((arr[i+1] - min ) > 1){
			cout<<min+1<<endl;
			return;
		}
		else 
			min = arr[i+1];
	}
	cout<<min+1<<endl;
	return;
}
int main (){
	int N;
	while(cin>>N)
		next(N);
	return 0;
}