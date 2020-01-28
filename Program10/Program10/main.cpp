
#include <iostream>
using namespace std;
int main()
{
    int b,pow;
    double a;
    cin >> a;
    cin >> b;
    pow = 1;
    cout <<  " a = " << a << " b = " << b << endl;
    if ((a==0) && (b<0))
    {
        cout << "infinity" << endl;
    }
    else if  ((a>0) && (b<0))
         for (int i=0; i>b i--)
         {
             {
                pow = pow * a;
                cout << 1/pow << endl;
             }
         }
    else
      {
         for (int i=0; i<b; i++)
           {
               pow = pow * a;
               cout << pow << endl;
           }
      }
    cout << "a^b = " << pow << endl;
    return 0;
}
