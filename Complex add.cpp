#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		
			int a;int b;int c;int d;char e;char i;
		
	public:
		
			void get();
			void add();
			void disp();
		
};
void complex::get()
{
	cout<<"Enter the real parts ";
	cin>>a>>b;
	cout<<"\nEnter the Imaginary parts ";
	cin>>c>>d;
}

void complex::add()
{
	a=a+b;
	c=c+d;
}

void complex::disp()
{
	if(c<0)
	{e=(-1)*i;}
	else
	{e=(+1)*i;}
	cout<<"\nThe complex sum is "<<a<<e<<c<<"i";
}

int main()
{
	complex c;
	c.get();
	c.add();
	c.disp();
	return 0;

}
