//MULTIPLE INHERITANCE
#include<conio.h>
#include<iostream>
using namespace std;
class Area
{
 public:
 float arcal(float l,float b)
 {
  return l*b;
 }
};
class Perimeter
{
 public:
 float percal(float l,float b)
 {
  return 2*(l+b);
 }
};
class Rectangle:private Area,private Perimeter
{
 float lt,bd;
 public:
 rectangle()
 {
  lt=0.0;
  bd=0.0;
 }
 void getdata()
 {
  cout<<"\n Enter length:";
  cin>>lt;
  cout<<"\n Enter breadth:";
  cin>>bd;
 }
 float areacalc()
 {
  return Area::arcal(lt,bd);
 }
 float pericalc()
 {
  return Perimeter::percal(lt,bd);
 }
};
int main()
{
 //clrscr();
 Rectangle r;
 r.getdata();
 cout<<"\n Area="<<r.areacalc();
 cout<<"\n Perimeter="<<r.pericalc();
 getch();
 return 0;
}
