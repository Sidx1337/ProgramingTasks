
#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cin >> a;
    for (i=2; i<a; i++)
    {
        if (a % i == 0)
        {
            cout << "Число непростое" << endl;
             return 0;
        }
        
    }
    cout << "Число простое" << endl;
    return 0;
}
