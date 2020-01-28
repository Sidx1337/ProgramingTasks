#include <iostream>
using namespace std;
int main()
{
    int n,a=0;
    const int k = 10;
    cout << "Введите количество цифр " << endl;
    cin >> n;
    int array[n];
    int digit[k];
    for (int l=0; l<k; l++)
    {
        cout<< digit[l] << " , ";
        digit[l]=0;
    }
    for (int i=0; i<n; i++)
    {
        cout << "Введите элементы массива от 0 до 9" << endl;
        cin >> array[i];
        a=array[i];
        digit[a]=(digit[a] + 1);
        cout << "a = " << a << endl;
        cout << "digit[a] = "<< digit[a] << endl;
    }
    for (int j=0; j<k; j++)
    {
          if (digit[j]>0)
          {
              cout << j << ":" << digit[j] << endl;
          }
    }
    for (int m=0; m<n; m++)
    {
        cout << array[m] << " , ";
    }
        return 0;
}
        


