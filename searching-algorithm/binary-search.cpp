#include <iostream>
#include <vector>

using namespace std;

/**
 * Binary Search Algorithm
 *
 * @param arr The sorted array to search in.
 * @param target The target element to find.
 * @return The index of the target element if found, or -1 if not found.
 */
int binarySearch(const vector<int> &arr, int target) {
  int left = 0;               // Left boundary of the search range
  int right = arr.size() - 1; // Right boundary of the search range

  while (left <= right) {
    int mid = left + (right - left) / 2; // Calculate the middle index

    if (arr[mid] == target) {
      return mid; // Target found, return its index
    } else if (arr[mid] < target) {
      left = mid + 1; // Adjust the left boundary
    } else {
      right = mid - 1; // Adjust the right boundary
    }
  }

  return -1; // Target not found
}

int main() {
  int n; // Number of elements in the sorted array
  cin >> n;

  vector<int> arr(n); // Create a sorted array of size n

  for (int i = 0; i < n; ++i) {
    cin >> arr[i]; // Input sorted array elements
  }

  int target; // Element to search for
  cin >> target;

  int index = binarySearch(arr, target); // Perform binary search

  if (index != -1) {
    cout << "Found at index " << index << endl;
  } else {
    cout << "Not found" << endl;
  }

  return 0;
}
