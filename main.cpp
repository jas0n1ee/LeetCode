#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n>0)?((n==1)?true:isPowerOfThree(n/3) && (n%3==0)):false;
    }
};
int main() {
    Solution s;
    cout<<s.isPowerOfThree(27);
    return 0;
}
