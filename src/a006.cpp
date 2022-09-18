#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, ans;
    cin >> a >> b >> c;
    if (pow(b, 2) - 4 * a * c == 0)
    {
        cout << "Two same roots x=" << (-b) / (2 * a) << endl;
    }
    else if (pow(b, 2) - 4 * a * c < 0)
    {
        cout << "No real root" << endl;
    }
    else if (pow(b, 2) - 4 * a * c > 0)
    {
        int i1 = -b;
        int i2 = sqrt(pow(b, 2) - 4 * a * c);
        int ans01 = (i1 + i2) / 2 * a;
        int ans02 = (i1 - i2) / 2 * a;
        cout << "Two different roots"<< " x1=" << ans01 << " , x2=" << ans02 << endl;  
    }
}