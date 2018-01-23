#include<iostream>
#include<string.h>
using namespace std

int main()
{
    char name[7];
    int marks,i=0;
    cout<<"enter the name of students";
    for(i=0;i<7;i++)
    {
        cin>>name[i];
    }
    cout<<"enter the marks";
    for(i=0;i<7;i++)
    {
        cin>>marks[i];
        cout<<name[i]<<"-"<<marks[i];
    }
    
}