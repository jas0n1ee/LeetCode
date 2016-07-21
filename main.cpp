#include<iostream>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int result = 0, l = s.length();
        const char *c = s.c_str();
        for (int i = 0; i < l; i++) {
            int n = c[i] - 'A' + 1;
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
