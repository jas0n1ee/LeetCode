#include<iostream>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        return a+b;
    }
};
int main() {
    Solution s;
    cout << s.getSum(3, 4);
    return 0;
}
