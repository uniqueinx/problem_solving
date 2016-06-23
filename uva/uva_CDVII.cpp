/*
author: uniqueinx
uva: 10138 - CDVII
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;
#define HOURS 24
struct shot {
	int month, day, hour, minute,road;
	bool exit;
};
bool compare (shot a, shot b){
	return a.day * 24 * 60 + a.hour * 60 + a.minute < b.day *24 * 60  + b.hour * 60 + b.minute;
}
int main(){
	ifstream inputfile ("input.txt");
	unsigned short cases;
	string test, name, line;
	char dots;

	cin>>cases;
	for (unsigned short k = 0; k < cases; k++){
		shot tmp;
		stringstream s;
		map <string, vector<shot> > photos;
		unsigned short fare[HOURS];
		if(k == 0){
			getline (cin,line);
			getline (cin, line);
		}
		getline (cin, line);
		s.str(line);
		for (unsigned short i = 0; i < HOURS; i++)
			s>>fare[i];
		while(1){
			getline(cin,line);
			if(line.empty())break;
			s.clear();
			s.str(line);
			s >> name >> tmp.month >> dots >>  tmp.day >> dots >> tmp.hour >> dots >>  tmp.minute >> test >> tmp.road;
			tmp.exit = (test == "exit")?true : false;
			photos[name].push_back(tmp);
			line = "";
		}
		for(map<string, vector<shot> >::iterator it = photos.begin(); it != photos.end(); it++){
			sort(it->second.begin(), it->second.end(), compare);
			double total_cost = 0;
			for(unsigned short i = 0; i < it->second.size(); i++){
				if(!it->second[i].exit)
					//may be last one is false
					if(i < it->second.size()-1 && it->second[i+1].exit){
						total_cost += 1 + fare[it->second[i].hour]/100.0 * (double)abs(it->second[i].road - it->second[i+1].road);
					}
			}
			if (total_cost != 0){
				total_cost += 2;
				cout << it->first << " $" << setprecision(2) << fixed << total_cost << endl;
			}
		}
		if (k != cases-1) cout << endl;
	}
	return 0;
}
