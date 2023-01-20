#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int linear_search(int search_value, int lst[], int elements) {
    int res = 0;
    for (int i = 0; i < elements; i++) {
        if (lst[i] != search_value) {
            res += 1;
        }
        else {
            res += 1;
            break;
        }
    }
    return res;
}