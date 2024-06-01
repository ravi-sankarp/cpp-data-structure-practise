#include <iostream>
#include <limits>
#include "./common/common.h"
using namespace std;

struct min_max_result
{
    int max = -numeric_limits<int>::infinity();
    int min = numeric_limits<int>::max();
};

min_max_result
find_min_max_from_arr(int *arr, int arr_size)
{
    min_max_result result;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] < result.min)
            result.min = arr[i];
        if (arr[i] > result.max)
            result.max = arr[i];
    }
    return result;
}

int main()
{
    init_array
        min_max_result min_and_max = find_min_max_from_arr(arr, arr_size);
    cout << "max value is: " << min_and_max.max << endl
         << "min value is : " << min_and_max.min;
}