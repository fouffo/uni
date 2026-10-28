#include <iostream>

int find(int arr[], int len, int n){
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == n) {
            return i;
        }
    }
    return -1;
}

void find_all(int arr[], unsigned int len, int n, int* occurrences){
    int prog = 0;
    for (unsigned int i = 0; i < len; i++)
    {
        if (arr[i] == n) {
            occurrences[prog++] = i;
        }
    }
}

int find_bin(int arr[], int n, int start, int end) {
    int middle = (start - end) / 2 + start;
    int middle_el = arr[middle];
    if(n < middle_el) {
        return find_bin(arr, n, start, middle);
    }
    if(n < middle_el) {
        return find_bin(arr, n, middle, end);
    }
    return middle;
}

void println(int arr[], unsigned int len){
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int arr[] = {0, 1, 3, 5, 1, 3};
    int occurrences[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    std::cout << find(arr, 6, 5) << std::endl;
    find_all(arr, 6, 1, occurrences);
    println(occurrences, 10);
}