#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <limits.h>

using namespace std;

void selection_sort(int arr[], int elements) {
    int start_idx = 0;
    while (start_idx!=elements) {
        int min_idx;
        int min = INT_MAX;
        for (int i = start_idx; i < elements; i++) {
            if (arr[i] < min) {
                min = arr[i];
                min_idx = i;
            }
        }
        swap(arr[start_idx], arr[min_idx]);
        start_idx += 1;
    }
    return;
}