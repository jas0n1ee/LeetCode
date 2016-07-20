#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        if(root->left) {
            current ++;
            minDepth(root->left);
            current --;
        }
        if(root->right) {
            current ++;
            minDepth(root->right);
            current --;
        }
        if(!root->left && !root->right)
            min = (min<current)?min:current;
        return min;
    }
    int min = 2147483647;
    int current = 1;
};
int main() {
    return 0;
}
