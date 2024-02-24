#include<iostream>
#include<algorithm>  // Include the <algorithm> header for swap
using namespace std;

void reverse(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    

    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    reverse(array, 5);

    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    return 0;
}