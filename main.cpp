#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length(), l2 = t.length();
        if (l1!= l2) return false;
        int h[26] = {0};
        for (int i = 0; i < l1; i++) {
            h[s[i]-'a']++;
            h[t[i]-'a']--;
        }
        for (int i = 0; i < 26; i++)
            if(h[i]!=0)
                return false;
        return true;
    }
};
int main() {
    Solution s;
    cout<<s.isAnagram("nl", "cx");
    return 0;
}
