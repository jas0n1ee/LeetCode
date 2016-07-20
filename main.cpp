#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int r = 0;
        int num = n;
        int iter = floor(log10(n));
        for(int i = 0; i <= iter; i++) {
            r += (num%10) * (num%10);
            num = num/10;
        }
        if (checkList[r]) return false;
        else if (r == 1) return true;
        else {
            checkList[r] = 1;
            return isHappy(r);
        }
    }
    bool checkList[810] = {0};
};
int main() {
    Solution s;
    cout<< s.isHappy(2147483647);
    return 0;
}
