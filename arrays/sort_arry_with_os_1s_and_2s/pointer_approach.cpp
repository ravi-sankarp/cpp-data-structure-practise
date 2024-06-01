// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
#include <iostream>
#include "../common/common.h"
using namespace std;

int main()
{
    init_array;
    int i = 0, l = 0;
    int r = arr_size - 1;
    int temp;
    while (i <= r)
    {
        switch (arr[i])
        {
        case 0:
        {

            temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;
            i++;
            l++;
            break;
        }
        case 2:
        {

            temp = arr[r];
            arr[r] = arr[i];
            arr[i] = temp;
            r--;
            break;
        }
        default:
            i++;
        }
    }

    print_array(arr, arr_size);
    return 0;
}