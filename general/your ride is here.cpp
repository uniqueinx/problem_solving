/*
NAME:uniquei1
LANG: C++
PROG:beads
*/
#include<iostream> 
#include<fstream>
#include<string>
using namespace std;
string intiate (string x);


int main()
{
	ifstream in ("beads.in.txt");
	ofstream out ("beads.out.txt");
	int N,counter=1,arrcount=0;
	in>>N;
	string necklace;
	char temp;
	for(int i=0; i<N; i++)
	{in>>temp;	necklace+=temp;}
	string beads=intiate(necklace);
	cout<<necklace<<endl;
	cout<<beads<<endl;
	//char temp=necklace[0];
	//int* arry=new int[N] ;
	//for (int i=0; i<N; i++)
	//	arry[i]=0;
	//for (int i=1; i<N; i++)
	//	if(temp==necklace[i])
	//		counter++;
	//	else 
	//	{
	//		arry[arrcount]=counter;
	//		arrcount++;
	//		counter=1;
	//		temp=necklace[i];

	//	}
	//	arry[arrcount]=counter;
	//	int max=arry[0]+arry[1];
	//	for(int i=1; i<N; i++)
	//		if(arry[i]+arry[i+1]>max)
	//			max=arry[i]+arry[i+1];
	//	for(int i=0; i<N; i++)
	//		cout<<necklace[i];
	//	cout<<endl;
	//	for(int i=0; i<N; i++)
	//		cout<<arry[i];
	//	cout<<endl;
	//	cout<<max<<endl;
		return 0;

}
string intiate (string x)
{
	string tmp=x;
	short beadspos=0;
	int first_r=x.find_first_of('r',0);
	int first_b=x.find_first_of('b',0);
	first_r < first_b ? beadspos=first_r : beadspos=first_b;
	bool flag =true;
	int counter=1;
	while(flag)
	{
		if(x[beadspos+counter]=='w')
			counter++;
		else if (x[beadspos+counter]!=x[beadspos])
		{
			beadspos=beadspos+counter+1;
			counter=1;
		}
		else
		{
			for(int i=beadspos+1; i<counter; i++)
				tmp[i]=x[beadspos];
			beadspos=beadspos+counter+1;
			counter=1;
		}
		if(beadspos>x.length()-1)
			flag=false;
	}
	return tmp;
}