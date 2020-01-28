#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    int a=0;
    replay:
    n=rand() % 101;
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
    cout << "Вы проиграли!" << "Было загадано число - " << n << endl;
    
    return 0;
}
