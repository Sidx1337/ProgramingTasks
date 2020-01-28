
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a, b, c, x1, x2, x3, y1, y2, y3, p, S;
    int way;
    cout << "Выберите способ(1 - через длины сторон , 2 - через координаты )" << endl;
    cin >> way;
    switch (way)
    {
    case 1:
        {
            cout << "Введите длины сторон" << endl;
            cin >> a >> b >> c;
            if (a + b > c && a + c > b && b + c > a) {
                p = 0.5*(a + b + c);
                S = sqrt(p*(p - a)*(p - b)*(p - c));
                cout << "S=" << S << endl;
            }
            else cout << "Doesn't exist\n";
            break;
        }

        case 2:
        {
            cout << "Введите координаты вершин треугольника" << endl;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            int a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            int b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
            int c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
            if (a + b > c && a + c > b && b + c > a) {
                S = 0.5*abs((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1));
                cout << "S=" << S << endl;
            }
            else cout << "Doesn't exist\n";
            break;
        }
        default:
            cout << "Wrong case" << endl;
    }
    return 0;
}
