#include <iostream>
#include <memory>
using namespace std;

/**
 * Used to read array from user
 */
#define init_array                                \
    int arr_size;                                 \
    cout << "Enter size of array" << endl;        \
    cin >> arr_size;                              \
    cout << "Enter array elements" << endl;       \
    int arr[arr_size];                            \
    for (int i = 0; i < arr_size; i++)            \
    {                                             \
        cout << "\n Enter " << i << " element:\t"; \
        cin >> arr[i];                            \
    }

void print_array(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "\t";
    }
}