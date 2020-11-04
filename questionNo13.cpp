#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

int randGenAB(int x)
{
    return abs((1608654747 * x % ( 4096 * 4096 )));
}

int main() {
   int x;
   int seedVal = 0;
   cout << "Enter Seed Value: ";
   cin >> seedVal;
   for(int i = 0; i < 10; i++) {
      seedVal = randGenAB(seedVal);
      x = ceil(seedVal * 16 / (4096.0 * 4096.0)) + 8;
      cout << "Step " << i + 1 << ": " << x << endl;
   }
}