#include<iostream>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
        const char *ori = s.c_str();
        int l = s.length();
        char *reversed = new char[l+1];
        for(int i = 0; i < l; i++)
            reversed[i] = ori[l - 1 - i];
        reversed[l] = '\0';
        return string(reversed);
    }
};
int main() {
    Solution s;
    cout << s.reverseString("hello world");
    return 0;
}
