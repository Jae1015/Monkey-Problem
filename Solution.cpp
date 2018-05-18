#include<iostream>
#include<fstream>

#define MAX 1000000
using namespace std;
int main()
{
	long int count=0;
	int health=2000;
	long int injury=1;
	ifstream fin("input.txt");
	n=fin.get();
	while(fin.eof==0)
	{
		if(health<=0||injury<MAX)
		{	cout<<"no more fights";
			break;
		}
		fin.getline(line,10);
		if(line<health)
		{
			health=health-line;
			injury=injury*line;
			count++;
		}
		else file.seekg(1,ios::cur);
	}
	cout<<"max monkeys"<<count;
   return 0;
}
