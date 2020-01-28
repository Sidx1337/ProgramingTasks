#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double P=1;
    int n, i;
    cout << "Введите n" << endl;
    cin >> n;
    for (i = 1; i <= n; i++) {
        P = P * (1 + 1.0 / (i * i));
    }
    cout << "P= " << P << endl;

}
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i;
    double a = 0.5, b = 0.6;
    float x=a;
    float h = 0.01;
    float fx;
    while (x <= b) {
        fx = 1 + exp(x);
        cout << "f(" << x << ")= " << fx << endl;
        x = x + h;
    }

}
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main() {
    double P = 1 , x;
    int n, i,fact = 1;
    cout << "Введите пожалуйста n" << endl;
    cin >> n;
    cout << "Введите пожалуйста x" << endl;
    cin >> x;
    
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        P = P * (1.0 + sin(x*i) / fact);
    }
    cout << "P= " << P << endl;

}
