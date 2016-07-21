#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length(), l2 = t.length();
        if (l1!= l2) return false;
        vector<char> s1,s2;
        const char *c1 = s.c_str(), *c2 = t.c_str();
        for(int i = 0; i < l1; i++) {
            s1.push_back(c1[i]);
            s2.push_back(c2[i]);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < l1; i++) {
            if (s1[i] != s2[i])
                return false;
        }
        return true;
    }
};
int main() {
    Solution s;
    cout<<s.isAnagram("cat", "art");
    return 0;
}
