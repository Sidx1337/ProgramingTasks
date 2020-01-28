#include <iostream>
using namespace std;
int main()
{
    int n,a=0;
    cout << "Введите длину массива" << endl;
    cin >> n;
    int array[n];
    for (int k=0; k<n; k++)
    {
        cout << "Введите элемент массива - ";
        cin >> array[k];
    }
    for (int i=0; i<n-1; i++)
    {
        for (int m=i+1; m<n-i-1; m++)
        {
                if (array[i]<array[m])
                {
                    a=array[i];
                    array[i]=array[m];
                    array[m]=a;
                }
        }
    }
    for (int j=0; j<n; j++)
    {
        cout << array[j] << " , ";
    }
    return 0;
}
