#include <iostream>

int min(int arr[], int len, int start = 0){
    if (len - start < 2) {
        return arr[start];
    }
    int min_next = min(arr, len, start + 1);
    return arr[start] < min_next ? arr[start] : min_next;
}

int max(int arr[], int len, int start = 0){
    if (len - start < 2) {
        return arr[start];
    }
    int max_next = max(arr, len, start + 1);
    return arr[start] > max_next ? arr[start] : max_next;
}

struct Stats {
    int min;
    int max;
};

Stats minmax(int arr[], int len, int start = 0){
    if (len - start < 2) {
        return Stats{
            min: arr[start],
            max: arr[start]
        };
    }
    Stats stats_next = minmax(arr, len, start + 1);
    if(stats_next.max < arr[start]){
        stats_next.max = arr[start];
    }
    if(stats_next.min > arr[start]){
        stats_next.min = arr[start];
    }
    return stats_next;
}

void fill(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        arr[i] = rand() % 1000;
    }
}

void print(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print(Stats stats){
    std::cout << "Stats{\"min\":" << stats.min << ",\"max\":" << stats.max << "}" << std::endl;
}

int main(){
    srand(time(NULL));
    int n;
    std::cin >> n;
    int* arr = (int*) malloc(n * sizeof(int));
    fill(arr, n);
    print(arr, n);
    std::cout << max(arr, n) << " " << min(arr, n) << std::endl;
    print(minmax(arr, n));
}
