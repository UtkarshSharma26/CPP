#include<iostream>
using namespace std;
class B
{
    public:
    virtual void display()
    {
                cout<<"Content of base class"<<endl;
    }
};
class D1:public B
{
    void display()
    {
        cout<<"First derived Class is called"<<endl;
    }
};
class D2:public B
{
    void display()
    {
        cout<<"Second derived Class is called"<<endl;
    }
};
int main()
{
    B *b;
    D1 d1;
    D2 d2;
    b=&d1;
    b->display();
    b=&d2;
    b->display();
    return 0;
}