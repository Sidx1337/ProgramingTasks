#include <iostream>
using namespace std;
int main()
{
    int a,b,N;
    cin >> N;

    a=N;
    b=N;
    while (a>1)
    {
        b=b*(a-1);
        a=(a-1);
    }
    
    if (b==0)
    {
        cout << "1" << endl;
    }
    if (b>0)
    {
    cout << b << endl;
    }
    return 0;
}
