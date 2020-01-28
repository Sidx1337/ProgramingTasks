#include <iostream>
using namespace std;
int main()
{
    const int n = 20;
    int max=-101,min=101;
    int k=rand();
    int array[n];
    cout << k;
    for (int i=0; i<20; i++)
    {
        array[i]=(rand() % 201) - 100;
    }
    for (int i=0; i<20; i++)
     {
         cout << array[i] << endl;
     }
    for (int i=0; i<20; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    cout << "Минимальное значение массива - " << min << endl;
    cout << "Максимальное значение массива - " << max << endl;
    return 0;
}

