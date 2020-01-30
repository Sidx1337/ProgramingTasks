#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cout << "Введите количество элементов последовательности:" << endl;
    cin >> n;
    int min[5] = {1000001,1000001,1000001,1000001,1000001}; // inizialization
    for (int i = 0; i < n; i ++) // cikl dl9 vseh signalov
    {
        cout << endl;
        cout << "Введите элемент массива:" << endl;
        cin >> a;
        for (int j = 0; j < 5; j ++)// sortirovka 5-i elementov
        {
            if (a<min[j])// esli noviy  signal menshe, to =>
             {
                 for (int k = 4; k > j; k --)// sdvig massiva, ubiraetsa samiy bolshoy element
                 {
                     min[k] = min[k-1];
                 }
                 min[j] = a;
                break;
             }
        }
        for (int k = 4; k >= 0; k --)// vivod zna4eniy tolko teh kotorie zapolnilis signalami
        {
            if (min[k] != 1000001)
                cout << min[k] << "  ";
        }
        cout << endl;
    }
    
    
}

