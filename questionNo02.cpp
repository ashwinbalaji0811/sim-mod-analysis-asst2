#include <iostream>
#include <cmath>

using namespace std;

float trianglePDFunction(float x)
{
    if (((x - 3.0) < 0) && ((x - 2.0) >= 0))
        return 0.5 * (x - 2.0);
    if (((x - 6.0) <= 0) && ((x - 3.0) >= 0))
        return 0.5 * (2.0 - (x / 3.0));

    return 0.0;
}

int randGenAB(int x)
{
    return abs((1608654747 * x % ( 4096 * 4096 )));
}

int main()
{
    int seedVal = 39876;
    float sum = 0.0;
    for (int i = 0; i < 1000; ++i)
    {
        seedVal = randGenAB(seedVal);
        //cout << seedVal << " " << trianglePDFunction((20 * seedVal / (4096.0 * 4096.0)) - 10.0) << endl;
        
        //simulating -infinity to +infinity as -10 to +10 
        sum = sum + trianglePDFunction((20 * seedVal / (4096.0 * 4096.0)) - 10.0);
    }
    sum = sum / 1000;
    cout << "Expected mean value of given Trinagular PDF = " << endl;
    cout << "Computed mean value of given Trinagular PDF = " << sum << endl;
}