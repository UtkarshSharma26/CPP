#include<iostream>
using namespace std;
int main()
{
int a,b,x;
cout<<"Enter values of a and b ";
cin>>a>>b;
x=a-b;
try
{
	if(x!=0)
	cout<<"a/x= "<<(a/x);
	else
	{
		throw(x);
	}
}
catch(int i)
{
	cout<<"exception caught x= "<<x<<endl;
}
return 0;
}
