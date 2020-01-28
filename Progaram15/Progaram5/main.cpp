#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cout << "Введите количество элементов последовательности:" << endl;
    cin >> n;
    int min[5] = {1000001,1000001,1000001,1000001,1000001};
    for (int i = 0; i < n; i ++)
    {
        cout << endl;
        cout << "Введите элемент массива:" << endl;
        cin >> a;
        for (int j = 0; j < 5; j ++)
        {
            if (a<min[j])
             {
                 for (int k = 4; k > j; k --)
                 {
                     min[k] = min[k-1];
                 }
                 min[j] = a;
                break;
             }
        }
        for (int k = 4; k >= 0; k --)
        {
            if (min[k] != 1000001)
                cout << min[k] << "  ";
        }
        cout << endl;
    }
    
    
}
