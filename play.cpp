// #include<bits/stdc++.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>

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

//---------------------------------------

//  OUTPUT

//---------------------------------------

// write your code declaration/defination

//---------------------------------------

int main() {
  fast_io int t = 1;
  // cin>>t;
  while (t--) {
    solve();
  }

  return 0;
}

// Let's start
void solve() {
  set<ll> uSet;

  uSet.insert(12);
  uSet.insert(1212);
  uSet.insert(134342);
  uSet.insert(121676212);
  uSet.insert(126761212);
  uSet.insert(120001212);

  for (ll ele : uSet) {
    cout << ele << endl;
  }
}