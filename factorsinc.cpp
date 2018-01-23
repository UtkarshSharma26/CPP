#include <iostream>
using namespace std;

int main()
{
   long int n, i;

    cout << "Enter integer: ";
    cin >> n;

    cout << "Factors are: " << endl;  
    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            cout << i <<"  " ;
    }

    return 0;
}