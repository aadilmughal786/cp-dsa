// #include<bits/stdc++.h>
#include <iostream>
#include <queue>
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

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> umap;
  vector<int> res;

  for (int i = 0; i < nums.size(); ++i) {
    int complement = target - nums[i];
    if (umap.count(complement) > 0) {
      res.push_back(umap[complement]);
      res.push_back(i);
      break;
    }
    umap[nums[i]] = i;
  }

  return res;
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

// Let's start
void solve() {}