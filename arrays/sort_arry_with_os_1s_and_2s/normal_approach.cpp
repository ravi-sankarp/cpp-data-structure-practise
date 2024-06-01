// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
#include <iostream>
#include "../common/common.h"
using namespace std;

int main()
{
    init_array;
    int zeros_length = 0;
    int ones_length = 0;
    int twos_length = 0;
    for (int i = 0; i < arr_size; i++)
    {
        switch (arr[i])
        {
        case 0:
            zeros_length++;
            break;
        case 1:
            ones_length++;
            break;
        case 2:
            twos_length++;
            break;

        default:
            cout << "invalid input";
            return 0;
        }
    }

    ones_length += zeros_length;
    twos_length += ones_length;
    for (int i = 1; i <= arr_size; i++)
    {
        if (i <= zeros_length)
        {
            arr[i - 1] = 0;
            continue;
        }
        if (i <= ones_length)
        {
            arr[i - 1] = 1;
            continue;
        }
        if (i <= twos_length)
        {
            arr[i - 1] = 2;
            continue;
        }
    }
    print_array(arr, arr_size);
    return 0;
}