#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; // Number of elements in the array
  cin >> n;

  vector<int> arr(n); // Create an array of size n

  for (int i = 0; i < n; ++i) {
    cin >> arr[i]; // Input array elements
  }

  int target; // Element to search for
  cin >> target;

  int index = -1; // Initialize the index to -1 (not found)

  for (int i = 0; i < n; ++i) {
    if (arr[i] == target) {
      index = i; // Update the index if the target is found
      break;     // Exit the loop early since we found the target
    }
  }

  if (index != -1) {
    cout << "Found at index " << index << endl;
  } else {
    cout << "Not found" << endl;
  }

  return 0;
}
