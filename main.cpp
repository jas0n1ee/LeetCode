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
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        if(root->left) {
            current ++;
            maxDepth(root->left);
            current --;
        }
        else
            max = (max>current)?max:current;
        if(root->right) {
            current ++;
            maxDepth(root->right);
            current --;
        }
        else
            max = (max>current)?max:current;
        return max;
    }
    int max = 0;
    int current = 1;
};
int main() {
    return 0;
}
