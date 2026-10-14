#include <iostream>

int sum(int arr[], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int maximum(int arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

/**
 * n is the precision of the moving average or somehting ig
 */
void movAvg(float arr[], int len, int n)
{
    for (int i = n - 1; i < len; i++)
    {
        float sum = 0;
        for (int j = n; j >= 0; j++)
        {
            sum += arr[i - j];
        }
        arr[i] = sum / n;
    }
}

void swapArr(int arr[], int len){
    for(int i = 1; i < len; i++){
        if(arr[i] < arr[i - 1]){
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }
    for(int i = 0; i < len; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; // Print the output array. What happens? -> The biggest element is now at the end.
}


