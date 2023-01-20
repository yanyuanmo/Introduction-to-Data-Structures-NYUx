#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

void swap(int *xp, int *yp) {
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
    return;
}