#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int gcd(int x, int y) {
    if (y==0) {
        return x;
    }
    gcd(y, x%y);
}