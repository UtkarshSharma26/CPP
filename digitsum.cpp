#include<iostream>
using namespace std;
int dsum(int);
int main()
{
	int a,s;
	cout<<"enter the number ";
	cin>>a;
	s=dsum(a);
	cout<<"the sum is "<<s;
	return 0;
}
int dsum(int n)
{
	int sum=0;
	if(n==0)
	{
	return 0;
	}
	sum=n%10+dsum(n/10);
	return sum;
}
