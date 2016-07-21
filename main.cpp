#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num_z_ele = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                i--;
                num_z_ele++;
            }
        }
        for(int i = 0; i < num_z_ele; i++)
            nums.push_back(0);
    }
};
int main() {
    return 0;
}
