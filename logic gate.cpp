#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x=0,count=0,n;
cout<<"Input the number";
cin>>n;


for(n;n>0;n/=10)
{
//x^x[n%2];
count++;
}
if(x==0)
cout<<"even\n";
else
cout<<"odd\n";
cout<<"Number of gates used="<<count-1;
return 0;
}

