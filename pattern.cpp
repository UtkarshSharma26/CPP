#include<iostream>
using namespace std;
int main(){

int n,i,j,k,l;
n=5;
for(i=0;i<n;i++)
{
	for(l=n;l<=n-1;++l)
	{
		cout<<"  ";
	}
	for(k=1;k<=i;k++)
	{
		cout<<"*";
	}
	for(j=0;j<=i;j++)
	{
	    cout<<"*";
	}
	cout<<"\n";
}
for(i=n;i>0;i--)
{
	
	for(k=1;k<i-1;k++)
	{
		cout<<"*";
	}
	
    for(j=i;j>0;j--)
    {
        cout<<"*";
    }
    cout<<"\n";
    
}
return 0;
}
