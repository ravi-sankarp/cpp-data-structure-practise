#include <iostream>
using namespace std;

int find_peak(int *arr, int arr_size)
{
    if (arr_size == 1)
    {
        return 0;
    }

    int peak_arr_elements[arr_size];
    int total_inserted_elements = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                peak_arr_elements[total_inserted_elements] = arr[i];
                ++total_inserted_elements;
            }
            continue;
        }
        if (i == arr_size - 1)
        {
            if (arr[i] > arr[i - 1])
            {
                peak_arr_elements[total_inserted_elements] = arr[i];
                ++total_inserted_elements;
            }
            continue;
        }
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            peak_arr_elements[total_inserted_elements] = arr[i];
            ++total_inserted_elements;
            continue;
        }
    }
    cout << "Peak elements are:" << endl;
    for (int i = 0; i < total_inserted_elements; i++)
    {
        cout << peak_arr_elements[i] << endl;
    }
}

int main()
{
    int arr_size;
    cout << "Enter size of array" << endl;
    cin >> arr_size;
    cout << "Enter array elements" << endl;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    find_peak(arr, arr_size);

    return 0;
}