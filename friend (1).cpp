#include<iostream>
#include<conio.h>
using namespace std;
class  base
{
	private:
    int a,b;
   public:
    void get()
    {
       cout<<"Input a & b : ";
       cin>>a>>b;
    }
    friend float sum(base ob);
};
float sum(base ob)
{
   return float(ob.a+ob.b);
}
int main()
{
   // clrscr();
    base o;
    o.get();
    cout<<"\n Sum is : "<<sum(o);
    //getch();
    return 0;
}          
