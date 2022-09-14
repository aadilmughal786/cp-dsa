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

void togglingKthBit(ll &n, int k) { n = n ^ (1 << (k - 1)); }

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
  ll n;
  int k;
  cin >> n >> k;
  togglingKthBit(n, k);
  cout << n << endl;
}