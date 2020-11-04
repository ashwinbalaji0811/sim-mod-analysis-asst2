#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;
double rand_gen() {
   // return a uniformly distributed random value
   return ( (double)(rand()) + 1. )/( (double)(RAND_MAX) + 1. );
}
double normalRandom() {
   // return a normally distributed random value
   double v1=rand_gen();
   double v2=rand_gen();
   return cos(2*3.14*v2)*sqrt(-2.*log(v1));
}
int main() {
   ofstream MyOut("random_normal.csv");
   double sigma = 2.0;
   double Mu = 33.0;
   for(int i=0;i<20;i++) {
      double x = normalRandom()*sigma+Mu;
      MyOut << x << endl;
   }
   MyOut.close();
}