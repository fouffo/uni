#include <iostream>
#include <climits>
#include <string.h>

int prod(int arr[], int len) {
    int prod = 1;
    for (int i = 0; i < len; i++)
    {
        prod *= arr[i];
    }
    return prod;
}

int sum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int max(int arr[], int len) {
    int max = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max) 
            max = arr[i];
    }
    return max;
}

float avg(int arr[], int len) {
    float avg = 0;
    for (int i = 0; i < len; i++)
    {
        avg += arr[i];
    }
    return avg / len;
}

int main(int argc, char** argv) {
    if (argc < 3) {
        return 1;
    }

    int* nums = new int[argc - 2]; // Dynamic memory allocation

    for (int i = 2; i < argc; i++) { // skips the first arg which is the program name
        nums[i - 2] = atoi(argv[i]);
    }

    if (sizeof(nums) == 0){
        
    }

    if(!strcmp(argv[1], "--max")){
        std::cout << "The maximum number is " << max(nums, argc - 2) << std::endl;
    } else if (!strcmp(argv[1], "--product")) {
        std::cout << "The product of the numbers is " << prod(nums, argc - 2) << std::endl;
    } else if (!strcmp(argv[1], "--sum")) {
        std::cout << "The sum of the numbers is " << sum(nums, argc - 2) << std::endl;
    } else if (!strcmp(argv[1], "--average")) {
        std::cout << "The average of the numbers is " << avg(nums, argc - 2) << std::endl;
    }

    delete nums; // Let's not leak memory

    return 0;
}