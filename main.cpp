#include<iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        return (num > 9)?addDigits(num/10+num%10):num;
    }
};
int main() {
    Solution s;
    cout<<s.addDigits(45468);
    return 0;
}
