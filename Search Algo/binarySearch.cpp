// #include<bits/stdc++.h>

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
// #include <cstring>
// #include <array>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

using namespace std;
void solve();

// write your code declaration/defination

int binarySearchRec(int arr[], int l, int r, int key) {
  int m = l + ((r - l) >> 1);
  if (l <= r) {
    if (arr[m] == key)
      return m;
    else if (arr[m] > key)
      return binarySearchRec(arr, l, m - 1, key);
    else
      return binarySearchRec(arr, m + 1, r, key);
  }
  return -1;
}

int binarySearchIter(int arr[], int l, int r, int key) {
  while (l <= r) {
    int m = l + ((r - l) >> 1);
    if (arr[m] == key)
      return m;
    else if (arr[m] > key)
      r = m - 1;
    else
      l = m + 1;
  }
  return -1;
}

void printArray(int arr[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; ++i)
    cout << arr[i] << ", ";
  cout << "\b\b ]";
}

//---------------------------------------

int main() {
  fast_io int t = 1;
  // cin>>t;
  while (t--) {
    solve();
  }

  return 0;
}

void solve() {
  int n, key;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  cin >> key;
  int ans = binarySearchIter(arr, 0, n - 1, key);
  cout << ans;
}