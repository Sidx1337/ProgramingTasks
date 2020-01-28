#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    double D,x1,x2;
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите б: " << endl;
    cin >> b;
    cout << "Введите с: " << endl;
    cin >> c;
    D=b*b-(4*a*c);
    if (a==0)
    {
        x1 = -c/b;
        cout << "x = " << x1 << endl;
        return 0;
    }
    if (D>0)
    {
        x1=(-b + sqrt(D))/2*a;
        x2=(-b - sqrt(D))/2*a;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    if (D==0)
    {
        x1=(-b + sqrt(D))/2*a;
        cout << "x = " << x1 << endl;
    }
    if (D<0)
    {
        cout << "Действительных корней нет" << endl;
    }
    return 0;
}
