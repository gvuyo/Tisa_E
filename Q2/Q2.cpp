#include<iostream>
using namespace std;
int main()
{
    int m, n;
    while (cin >> m >> n) {
        int R = 10000;
        double iR = (m * m) + (n * n);
        if (iR < R) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }
    }
    return 0;
}