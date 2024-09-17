#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -8 - R)
        y = R;
    else
        if (-8 - R < x && x <= -8 + R)
            y = -(sqrt(pow(R, 2) - pow(x, 2) - 16 * x - 64)) + R;
        else
            if (-8 + R < x && x <= -4)
                y = R;
            else
                if (-4 < x && x <= 2)
                    y = -(R / 4.) * x;
                else
                    y = x - 3;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
