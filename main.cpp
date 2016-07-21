#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, count = 0;
        int l = nums.size();
        for (int i = 0; i < l; i++) {
            if(count == 0) {
                major = nums[i];
                count ++;
            }
            else if (major == nums[i])
                count ++;
            else
                count --;
        }
        return major;
    }
};
int main() {
    return 0;
}
