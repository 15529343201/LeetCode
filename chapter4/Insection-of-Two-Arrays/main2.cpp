#include<iostream>
#include<vector>
#include<map>

using namespace std;

// 时间复杂度：O(nlogn)
// 空间复杂度：O(n)
class Solution {
public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
    // O(nlogn)
    map<int,int> record;
    for(int i=0;i<nums1.size();i++)
      record[nums1[i]]++;

    // O(nlogn)
    vector<int> resultVector;
    for(int i=0;i<nums2.size();i++)
      if(record[nums2[i]]>0) {
	resultVector.push_back(nums2[i]);
	record[nums2[i]]--;
      }

    return resultVector;
  }
};

int main() {
  return 0;
}
