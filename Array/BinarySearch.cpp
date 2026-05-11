#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;

    while (start <= end) {

        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        else if (arr[mid] < target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {1, 3, 5, 7, 9};
    int target = 7;

    int result = binarySearch(arr, 5, target);

    if (result != -1)
        cout << "Element found at index " << result;

    else
        cout << "Element not found";

    return 0;
}
