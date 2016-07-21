#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        vector<int> result;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i]>nums2[j] || (result.size() && nums2[j] == result.back()))
                j++;
            else if (nums1[i]<nums2[j]  || (result.size() && nums1[i] == result.back()))
                i++;
            else {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};
int main() {
    return 0;
}
