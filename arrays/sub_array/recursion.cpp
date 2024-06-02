// https://www.geeksforgeeks.org/generating-subarrays-using-recursion/
#include <iostream>
using namespace std;
#include "../common/common.h"

void print_sub_array(int *arr, int arr_size, int start, int end)
{
    if (end == arr_size)
    {
        return;
    }
    else
    {
        cout << "[";
        for (int i = start; i < end; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << arr[end] << "]" << endl;
        if (start + 1 > end)
        {
            print_sub_array(arr, arr_size, 0, end + 1);
        }
        else
        {

            print_sub_array(arr, arr_size, start + 1, end);
        }
    }
}
int main()
{
    init_array;
    print_sub_array(arr, arr_size, 0, 0);
    return 0;
}