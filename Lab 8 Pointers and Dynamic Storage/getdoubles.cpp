#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

double* getDoubles(int numDoubles) {
    double* arr = new double[numDoubles];
    for (int i = 0; i < numDoubles; i++) {
        double cur_value = double(i+1)/3;
        arr[i] = cur_value;
    }
    return &arr[0];
}