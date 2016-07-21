#include<iostream>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int n = s.c_str()[i] - 'A' + 1;
            result = result*26 + n;
        }
        return result;
    }
};
int main() {
    Solution s;
    cout<<s.titleToNumber("A");
    return 0;
}
