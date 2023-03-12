#include <iostream>    
using namespace std;    
int main()    
{    
    int x, y;    
    int r = 100;    
    int x1 = 0, y1 = 0;      
    cin >> x >> y;    
    if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r * r)    
        cout << "inside" << endl;    
    else    
        cout << "outside" << endl;    
    //cout << x << " " << y << " " << r << " " << endl;    
    
    return 0;    
}  