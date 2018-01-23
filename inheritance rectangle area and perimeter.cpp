#include<iostream>
using namespace std;
class area
{
	public:
		float ar(float l,float b)
		{
			return l*b;
		}
};
class perimeter
{
	public:	
		float per(float l,float b)
		{
			return 2*(l+b);
		}
};
class rect:private area,private perimeter
{
	private:
		float ln,bt;
	public:
		rect()
		{
			ln=0.0;
			bt=0.0;
		}
	void getdata()
	{
		cout<<"length ";
		cin>>ln;
		cout<<"breadth ";
		cin>>bt;
	}
	float ar()
	{
		return area::ar(ln,bt);
	}
	float per()
	{
		return perimeter::per(ln,bt);
	}
};
int main()
{
	rect r;
	r.getdata();
	cout<<"Area "<<r.ar();
	cout<<"perimeter "<<r.per();
	return 0;
}

