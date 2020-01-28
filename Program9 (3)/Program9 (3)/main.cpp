#include <iostream>
using namespace std;
int main()
{
bool checkResult = false;
    int n, x;
    srand(unsigned(time(0)));
replay:
    n = rand() % 101;
    cout<<n;
    cout << "Попробуйте угадать число " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (i < 4) {
            if (x > n) {
                cout << "Загаданное число меньше" << endl; continue;
            }
            if (x < n) {
                cout << "Загаданное число больше" << endl; continue;
            }
        }
        if (x == n) {
            checkResult = true;
            cout << "Ура вы выиграли!!!!" << endl; break;
        }

    }
    if (checkResult == false)
        cout << "Вы проиграли, загаданное число было " << n << endl;

    int a;
    cout << "ХОЧЕШЬ ЕЩЕ?(1- ДА , 2- Нет)" << endl;
    cin >> a;
    switch (a) {
    case 1:
        system("CLS");
        goto replay;
        break;
    case 2:
        cout << "Удачи!" << endl;
        break;

    default:
        cout << "Сказано же 1 или 2!!!" << endl;
        break;
    }
    return 0;
}
