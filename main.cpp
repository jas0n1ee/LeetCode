#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        return (num > 0) ? num - 9 * floor((num - 1) / 9) : 0;
    }
};
int main() {
    Solution s;
    cout<<s.addDigits(45468);
    return 0;
}
