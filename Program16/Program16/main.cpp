#include <iostream>
using namespace std;
void factorization(int n)
{
    int i=2;
    string b;
    while (i<=n)
    {
          int a=0;
          while (n % i == 0)
          {
              n = n / i;
              cout << i << " * ";
              a = a + 1;
          }
        if (a>0)
        {
            b=b + i
        }
          if (i==2)
              i=i+1;
          else
              i=i+2;
    }
}

int main()
{
    int n;
    cin >> n;
    factorization(n);
    return 0;
}

