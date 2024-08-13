#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

pair<int, int> twoSum_hash(vector<int> &nums, int target) {
  pair<int, int> result;
  unordered_set<int> H;
  for (auto e : nums)
    H.insert(e);
  for (auto e : nums) {
    auto it = H.find(target - e);
    if (it != H.end()) {
      result = make_pair(e, target - e);
      return result;
    }
  }

  return result;
}

pair<int, int> twoSum(vector<int> &nums, int target) {
  pair<int, int> result;
  sort(nums.begin(), nums.end());
  for (auto e : nums) {
    if (binary_search(nums.begin(), nums.end(), target - e)) {
      result = make_pair(e, target - e);
      return result;
    }
  }

  return result;
}

int main() {
  int target = 10;
  vector<int> nums{1, 3, 2, 7, 11, 20, 52, 10, 90};

  pair<int, int> result = twoSum(nums, target);
  cout << result.first << ", " << result.second << " sums to target:" << target
       << endl;
  return 0;
}