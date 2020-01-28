
#include <iostream>
using namespace std;
int main()
{
    double a, b, с;
    char znak = ':';

    cin >> a >> znak >> b;

    switch (znak) {
    case '+':
        с = a + b;
        cout << с << endl;
        break;

    case '-':
        с = a - b;
        cout << с << endl;
        break;

    case '*':
        с = a * b;
        cout << с << endl;
        break;

    case '/':
            if (b==0)
            {
                cout << "На ноль делить нельзя" << endl;
                return 0;
            }
        с = a / b;
        cout << с << endl;
        break;

    default:
        cout << "Несуществующий знак" << endl;
        break;
    }
         return 0;
}
