#include <climits>
#include <iostream>

/*
 * a and b are the indexes of the elements that should be swapped
 */
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int min_val = INT_MAX;
        int min_idx = -1;
        for (int j = i; j < len; j++)
        {
            if (arr[j] < min_val)
            {
                min_val = arr[j];
                min_idx = j;
            }
        }
        swap(arr, i, min_idx);
    }
}

void insertion_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1]){
                swap(arr, j, j - 1);
            }
        }
    }
}

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = len; j > i; j--)
        {
            if (arr[j] < arr[i])
            {
                swap(arr, i, j);
            }
        }
    }
}

void randomize(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = rand();
    }
}

void println(int arr[], unsigned int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool is_sorted(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool is_sorted_rec(int arr[], int start, int end)
{
    if(start - end < 2)
        return true;
    if (arr[start] > arr[end]) {
        int middle = (end - start) / 2 + start;
        return is_sorted_rec(arr, start, middle) && is_sorted_rec(arr, middle, end);
    }
    return false;
}

int main()
{
    int arr[100000];
    randomize(arr, 100000);
    selection_sort(arr, 100000);
    std::cout << is_sorted(arr, 100000) << std::endl;
    std::cout << is_sorted_rec(arr, 0, 100000) << std::endl;
    randomize(arr, 100000);
    insertion_sort(arr, 100000);
    std::cout << is_sorted(arr, 100000) << std::endl;
    std::cout << is_sorted_rec(arr, 0, 100000) << std::endl;
    randomize(arr, 100000);
    bubble_sort(arr, 100000);
    std::cout << is_sorted(arr, 100000) << std::endl;
    std::cout << is_sorted_rec(arr, 0, 100000) << std::endl;
}
