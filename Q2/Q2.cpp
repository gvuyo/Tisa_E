#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    float k = 0;
    cin >> a;
    k = a * 1.6;
    cout << fixed << setprecision(1) << k << endl;
}