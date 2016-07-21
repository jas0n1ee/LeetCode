#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};
int main() {
    Solution s;
    cout<<s.isPowerOfThree(27);
    return 0;
}
