// #include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// #include <typeinfo>
// #include <queue>
// #include <ctime>
// #include <stack>
// #include <cstring>
// #include <array>
// #include <cmath>

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

const ll MOD = 1e9 + 7;

void solve();

// write your code declaration/defination

bool isPrime(ll n) {
  if (n < 2)
    return false;

  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0)
      return false;
  }

  return true;
}

//---------------------------------------

int main() {
  fast_io int t = 1;
//   cin>>t;
  while (t--) {
    solve();
  }

  return 0;
}

void solve() {
  ll n;
  cin >> n;
  cout << isPrime(n);
}