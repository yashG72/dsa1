#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = start + (end-start) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        // go to right wala part
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[6] = {3, 5, 6, 7, 8, 14};
    int odd[5] = {4, 11, 12, 13, 15};

    int index = binarySearch(even, 6, 7);
    cout << "Index of 12 is " << index << endl;
    return 0;
}
