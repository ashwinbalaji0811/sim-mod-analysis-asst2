#include <iostream>

using namespace std;

float trianglePDFunction(float x)
{
    if (((x - 3.0) < 0) && ((x - 2.0) >= 0))
        return 0.5 * (x - 2.0);
    if (((x - 6.0) <= 0) && ((x - 3.0) >= 0))
        return 0.5 * (2.0 - (x / 3.0));

    return 0.0;
}

float randGenAB(float x)
{
    return (16087 * x % ( 4096 * 4096 ));
}

int main()
{
    float seedVal = 39876, sum = 0.0;
    for (int i = 0; i < 1000; ++i)
    {
        seedVal = randGenAB(seedVal);
        sum = sum + trianglePDFunction((20 * seedVal / (4096.0 * 4096.0)) - 10.0);
    }
    sum = sum / 1000;
    cout << "Expected mean value of given Trinagular PDF = " << endl;
    cout << "Computed mean value of given Trinagular PDF = " << sum << endl;
}