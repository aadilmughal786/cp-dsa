#include <iostream>
#include <vector>

using namespace std;

// Utility function to swap two integers
void mySwap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

// Function to print the elements of an array
void printArray(const vector<int> &arr) {
  cout << "[ ";
  for (int num : arr) {
    cout << num << ", ";
  }
  cout << "\b\b ]"
       << endl; // Remove the extra comma and space before closing bracket
}

// Function to shift greater elements towards the end of the array
void shiftGreaterToEnd(vector<int> &arr, int index) {
  for (int i = 0; i < index; ++i) {
    if (arr[i] > arr[i + 1]) {
      mySwap(arr[i], arr[i + 1]);
    }
  }
}

// Bubble sort algorithm to sort the array in ascending order
void bubbleSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    shiftGreaterToEnd(arr, n - i - 1);
  }
}

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  cout << "Original array: ";
  printArray(arr);

  bubbleSort(arr);

  cout << "Sorted array: ";
  printArray(arr);

  return 0;
}
