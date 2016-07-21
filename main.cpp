#include<iostream>
using namespace std;
class Solution {
public:
    bool isUgly(int num) {
        if(num < 2)
            return num==1;
        else {
            int n2 = num%2;
            if(!n2)
                return isUgly(num/2);
            int n3 = num%3;
            if(!n3)
                return isUgly(num/3);
            int n5 = num%5;
            if (!n5)
                return isUgly(num/5);
            return false;
        }
    }
};
int main() {
    Solution s;
    cout<<s.isUgly(14);
    return 0;
}
