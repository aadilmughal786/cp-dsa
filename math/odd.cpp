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

//  INPUT
// 5 561 90 121 15161 781111
//---------------------------------------

//  OUTPUT
// 1 0 1 1 1
//---------------------------------------

// write your code declaration/defination

bool isOdd1(ll n) { return n % 2 == 1; }

bool isOdd2(ll n) { return n & 1; }

//---------------------------------------

int main() {
  fast_io int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// Let's start
void solve() {
  ll n;
  cin >> n;
  cout << isOdd1(n) << " ";
}