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

int linerSerachIter(int arr[], int n, int key) {
  for (int i = 0; i < n; ++i) {
    if (arr[i] == key)
      return i;
  }
  return -1;
}

int linerSerachrec(int arr[], int n, int key) {
  if (n - 1 < 0)
    return -1;
  if (arr[n - 1] == key)
    return n - 1;
  return linerSerachrec(arr, n - 1, key);
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
  int ans = linerSerachrec(arr, n, key);
  cout << ans;
}