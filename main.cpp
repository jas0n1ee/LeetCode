#include<iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result = 0,l = s.length();
        for (int i = 0; i < l; i++) {
            switch(s[i]){
                case 'I':
                    if (i < l - 1 && (s[i+1] == 'V' || s[i+1] == 'X')) {
                        result += (s[i+1] == 'V')?4:9;
                        i ++;
                    }
                    else
                        result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    if (i < l - 1 && (s[i+1] == 'L' || s[i+1] == 'C')) {
                        result += (s[i+1] == 'L')?40:90;
                        i ++;
                    }
                    else
                        result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    if (i < l - 1 && (s[i+1] == 'D' || s[i+1] == 'M')) {
                        result += (s[i+1] == 'D')?400:900;
                        i ++;
                    }
                    else
                        result += 100;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
                    
            }
        }
        return result;
    }
};
int main() {
    Solution s;
    cout<<s.romanToInt("DCXXI");
    return 0;
}
