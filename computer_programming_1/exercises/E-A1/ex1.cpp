#include <iostream>

const int LENGTH = 7;

void getArr(int arr[], int length){
    for(int i = 0; i < LENGTH; i++){
        std::cout << "What number should I put at index " << i << "? : ";
        std::cin >> arr[i];
    }
}

void printArr(int arr[], int len){
    for(int i = 0; i < len; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int arr[LENGTH];

    std::cout << "I need you to drop me " << LENGTH << " numbers rq." << std::endl;

    getArr(arr, LENGTH);

    printArr(arr, LENGTH);
}
