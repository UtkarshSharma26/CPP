#include<iostream>
using namespace std;

 class marathon
{
    public:
    virtual void data(double a,double b,double c)
    {
        cout<<"distance covered \n";
        for (int i=0;i<=100;i+=10)
        {
            cout<<"At"<<i<<"minute";
            cout<<" "<<a*i*60<<" "<<b*i*60<<" "<<c*i*60<<endl;
        }
    }
};
int main()
{
    marathon m;
    int x,y,z;
    cout<<"Enter the speed in m/s";
    cin>>x>>y>>z;
    m.data(x,y,z);
    return 0;
}
