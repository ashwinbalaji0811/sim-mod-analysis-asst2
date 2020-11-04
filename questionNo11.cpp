#include <iostream>

using namespace std;

float returnNextRandomNumber(float seedVal)
{
    if ((seedVal - 30.0) < 0.0)
        return 15.0 + 225 * ((seedVal / 300.0) - 0.0000001);
    if ((seedVal - 45.0) < 0.0)
        return 30.0 + 12.5 * ((seedVal / 300.0) - 0.06666666);
    if ((seedVal - 60.0) < 0.0)
        return 45.0 + 90 * ((seedVal / 300.0) - 0.13333333);
    if ((seedVal - 90.0) < 0.0)
        return 60.0 + 64.28571429 * ((seedVal / 300.0) - 0.06666666);
    if ((seedVal - 120.0) < 0.0)
        return 95.0 + 75 * ((seedVal / 300.0) - 0.23333333);
    if ((seedVal - 180.0) < 0.0)
        return 120.0 + 112.5 * ((seedVal / 300.0) - 0.2);
    if ((seedVal - 300.0) < 0.0)
        return 180.0 + 225 * ((seedVal / 300.0) - 0.13333333);
}

int main()
{
    cout << "Enter the seed value: ";
    float seedVal = 0.0;
    cin >> seedVal;
    for (int i = 0; i < 5; ++i)
    {
        seedVal = returnNextRandomNumber(seedVal);
        cout << "Case " << i + 1 << ": " << seedVal << endl;
    }
}