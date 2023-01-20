#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int helper(int search_value, int lst[], int elements, int l, int r, int& steps) {
    if (l==r) {
        if (search_value==lst[l]) {
            return l;
        }
        else {
            return -1;
        }
    }
    int mid = (l+r)/2;
    if (search_value>lst[mid]) {
        steps += 1;
        return helper(search_value, lst, elements, mid+1, r, steps);
    }
    else if (search_value<lst[mid]) {
        steps += 1;
        return helper(search_value, lst, elements, l, mid-1, steps);
    }
    else {
        return mid;
    }
}

int binary_search(int search_value, int lst[], int elements) {
    int steps = 1;
    int res = helper(search_value, lst, elements, 0, elements-1, steps);
    if (res==-1) {
        steps = ceil(log(elements));
    }
    return steps;
}