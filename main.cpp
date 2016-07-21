#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n >= 1<<16)
            return hammingWeight(n&0xFFFF) + hammingWeight(n>>16);
        else if(n >= 1<<8)
            return hammingWeight(n&0xFF) + hammingWeight(n>>8);
        else if(n >= 1<<4)
            return hammingWeight(n&0xF) + hammingWeight(n>>4);
        else if(n >= 1<<2)
            return hammingWeight(n&3) + hammingWeight(n>>2);
        else if(n >= 1<<1)
            return hammingWeight(n&1) + hammingWeight(n>>1);
        else
            return (n==1)?1:0;
    }
};
int main() {
    Solution s;
    cout<<s.hammingWeight(11);
    return 0;
}
