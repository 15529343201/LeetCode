#include<iostream>
#include<vector>
#include<cassert>
#include<stdexcept>

using namespace std;

// 时间复杂度:O(n)
// 空间复杂度:O(1)
class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
  
    assert(numbers.size() >= 2);

    int l = 0, r = numbers.size() - 1;
    while(l < r) {
      if(numbers[l] + numbers[r] == target) {
	int res[2] = {l+1, r+1};
	return vector<int>(res,res+2);
      }
      else if(numbers[l] + numbers[r] < target)
	l++;
      else
	r--;
    }
    throw invalid_argument("The input has no solution.");
  }
};

int main() {
  return 0;
}

