#include <iostream>
using namespace std;
int main()
{
    bool flag = false;
    int array[10][8];
    int n=0,m=0,a,b;
    for (int i=0; i<10; i++)
    {
         for (int j=0; j<8; j++)
         {
             array[i][j]=0;
              cout << array[i][j] << endl;
         }
    }
    srand(unsigned(time(0)));
        n = rand() % 10;
        m = rand() % 8;
    cout << n <<" , "<< m << endl;
    array[n][m]=rand() % 101;
        for (int k=0; k<5; k++)
        {
             cout << "Попробуйте угадать ячейку массива" << endl;
             cin >> a;
             cin >> b;
            if ((a==n) && (b==m))
            {
                cout << "Вы угадали!" << endl;
                flag = true;
                return 0;
            }
            if ((a>10) || (b>8))
            {
                cout << "Выход за границу массива" << endl;
            }
            else
            {
                cout << "Нет" << endl;
            }
            if (array[a][b]==-1)
            {
                cout << "Эту уже проверяли" << endl;
                k--;
            }
            array[a][b]=-1;
            
        }
    if (flag == false)
             cout << "GAME OVER" << endl;
    return 0;
}
