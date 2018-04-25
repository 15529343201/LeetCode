#include<iostream>
#include<vector>
#include<set>

using namespace std;

// 时间复杂度：O(nlogn)
// 空间复杂度：O(n)
class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
    /*
    set<int> record;
    for(int i=0;i<nums1.size();i++)
      record.insert(nums1[i]);
    */
    // O(nlogn)
    set<int> record(nums1.begin(),nums1.end());

    // O(nlogn)
    set<int> resultSet;
    for(int i=0;i<nums2.size();i++)
      if(record.find(nums2[i])!=record.end())
	resultSet.insert(nums2[i]);

    /*
    vector<int> resultVector;
    for(set<int>::iterator iter=resultSet.begin();iter!=resultSet.end();iter++)
      resultVector.push_back(*iter);

    return resultVector;
    */

    // O(n)
    return vector<int>(resultSet.begin(),resultSet.end());
  }
};

int main() {
  return 0;
}
