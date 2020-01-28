#include <iostream>
using namespace std;
int main()
{
  double x0,v0,t;
  const double g = -9.8;
    cout << "x0 = " << endl;
    cin >> x0;
    cout << "v0 = " << endl;
    cin >> v0;
    cout << "t = " << endl;
    cin >> t;
    //cout << x0 + v0 * t + 1 / 2 * g * t * t << endl;
  cout << x0 + v0 * t + g * t * t * (1 /  2) << endl;
return 0;
}
