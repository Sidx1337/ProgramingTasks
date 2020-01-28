#include <iostream>
using namespace std;
int main()
{
    int s,l1,r1,l2,r2;
    bool flag = false;
    cout << "Введите промежуток 1" << endl;
    cin >> l1 >> r1;
    cout << "Введите промежуток 2" << endl;
    cin >> l2 >> r2;
    cout << "Введите сумму" << endl;
    cin >> s;
    int dlina1 = r1 - l1 + 1;
    int array1[dlina1];
    int dlina2 = r2 - l2 + 1;
    int array2[dlina2];
    for (int i=0; i<dlina1; i++)
    {
        array1[i] = l1 + i;
    }
    for (int j=0; j<dlina2; j++)
    {
        array2[j] = l2 + j;
    }
    for (int i=0; i<dlina1; i++)
    {
        for (int j=0; j<dlina2; j++)
        {
             if (array1[i] + array2[j] == s)
             {
                 cout << array1[i] << " + " << array2[j] << " = " << s << "  Сумма найдена!" << endl;
                 flag = true;
                 break;
            }
        }
        if (flag)
        {
             break;
        }
    }
 if (!flag)
 {
     cout << "Сумма не найдена!" << endl;
 }
}
