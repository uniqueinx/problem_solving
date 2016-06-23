/*
NAME:uniquei1
LANG: C++
PROG:gift1
*/
#include<iostream> 
#include<fstream>
#include<string.h>
using namespace std;
struct account
{
	char* name;
	int receive,give;
};
int find(const char* c,const account* list,int& counter);
int main()
{
	ifstream in ("gift1.in");
	ofstream out ("gift1.out");
	char* temp=new char [20];
	int countes,index,nps,value,gift;
	in>>countes;
	account* list=new account[countes];
	for (int i=0;	i<countes;	i++)
	{
		in>>temp;
		list[i].name=new char[strlen(temp)+1];
		//in>>list[i].name;
		strcpy(list[i].name,temp);
		list[i].give=list[i].receive=0;
	}

	for(int j=0;	j<countes;	j++)
	{
		in>>temp;
		index=find(temp,list,countes);
		if(index!=-1)
		{
			in>>gift;
			in>>nps;
			if(gift!=0)
			{
				if(nps!=0)
				{
					value=gift/nps;
					list[index].give=nps*value;
					for(int i=0;	i<nps;	i++)
					{
						in>>temp;
						index=find(temp,list,countes);
						if(index!=-1)
						list[index].receive+=value;
					}
				}
			}
			else
				for(int i=0;	i<nps;	i++)
					in>>temp;
		}
	}
	for(int i=0;	i<countes;	i++)
	{
		out<<list[i].name<<" "<<(list[i].receive-list[i].give)<<"\n";
	}
//	delete temp;
	//for(int i=0;	i<countes;	i++)
	//delete [] list[i].name;
	return 0;
}

int find(const char* c,const account* list,int& counter)
{
	for(int i=0;	i<counter;	i++)
		if(strcmp(c,list[i].name)==0)
			return i;
	return -1;
}
