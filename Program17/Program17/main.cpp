#include <iostream>
using namespace std;
double BMI(double weight, double height)
{
    height=height/100;
    double  bmi=weight/(height*height);
    return bmi;
}
void printBMI(double BMI)
{
    const double A = 18.5;
    const double B = 25.0;
    const double C = 30.0;
    if (BMI<A)
    {
        cout << "Underweight" << endl;
    }
    if ((A<=BMI) && (BMI<B))
    {
        cout << "Normal weight" << endl;
    }
    if ((B<=BMI) && (BMI<C))
    {
        cout << "Overweight" << endl;
    }
    if (C<=BMI)
    {
        cout << "Obesity" << endl;
    }
}
int main()
{
    int weight,height;
    double index;
    cout << "Введите вес: " << endl;
    cin >> weight;
    cout << "Введите рост: " << endl;
    cin >> height;
    index=BMI(weight,height);
    printBMI(index);
    return 0;
}
