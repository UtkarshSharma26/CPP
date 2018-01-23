#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char data[100];
	//opening
	ofstream outfile;
	outfile.open("my.dat");
	//writing
	cout<<"Writing in file"<<endl;
	cout<<"Name ";
	cin.getline(data,100);
	outfile<<data<<endl;
	cout<<"Age ";
	cin>>data;
	outfile<<data<<endl;
	//closing
	outfile.close();
	//reading
	ifstream infile;
	infile.open("my.dat");
	infile>>data;
	cout<<data<<endl;
	infile>>data;
	cout<<data;
	//closing
	infile.close();
	return 0;
}

