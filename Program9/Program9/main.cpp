#include <iostream>
using namespace std;
int main()
{
    int a=0,k;
    int n;
    bool flag = false;
     srand(unsigned(time(0)));
    restart:
        n = rand() % 101;
    cout<<n<<endl;
    for (int i=0; i<5; i++)
    {
        cout << "Попробуйте угадать загаданное число" << endl;
        cin >> a;
        if (a<n)
          {
              cout << "Загаданное число больше" << endl;
          }
        if (a>n)
          {
              cout << "Загаданное число меньше" << endl;
          }
        if (a==n)
          {
              cout << "Вы победили!" << endl;
              flag = true;
              return 0;
          }
    }
    if (flag == false)
           cout << "Вы проиграли, загаданное число - " << n << endl;
       cout << "Хотите сыграть еще раз?(1 - Да , 2 - Нет)" << endl;
       cin >> k;
       switch (k)
       {
       case 1:
           system("CLS");
           goto restart;
           break;
       case 2:
           cout << "До встречи" << endl;
           break;
        return 0;
       }
}
