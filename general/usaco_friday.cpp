/*
NAME:uniquei1
LANG: C++
PROG:friday
*/
#include<iostream> 
#include<fstream>
#include<string.h>6
using namespace std;
int week[7]={0};
int start=2,counter=0;


void calc(int n,int days);
int main()
{
	ifstream in ("friday.in");
	ofstream out ("friday.out");
	int years;
	in>>years;
	years+=(1900);
	for(int i=1900; i<years; i++)
	{
		//jen
		calc(31,start);
		//feb
		if(i%100==0)
			if(i%400==0)
				calc(29,start);
			else
				calc(28,start);
		else
			if(i%4==0)
				calc(29,start);
			else
				calc(28,start);
		//march
		calc(31,start);
		//april
		calc(30,start);
		//may
		calc(31,start);
		//june	
		calc(30,start);
		//july	
		calc(31,start);
		//aug	
		calc(31,start);
		//sep	
		calc(30,start);
		//oct	
		calc(31,start);
		//nov	
		calc(30,start);
		//dec	
		calc(31,start);

	}
	for(int i=0; i<7; i++ )
	{
		out<<week[i];if(i<6) out<<" "; 
		
	}
	out<<endl;
	//cout<<counter;


	return 0;

}

void calc(int n,int days)
{
	for(int i=1; i<n+1; i++)
	{
		counter++;
		if(i==13)
			week[days]++;
		days=(days+1)%7;
	}
	start=days;
}