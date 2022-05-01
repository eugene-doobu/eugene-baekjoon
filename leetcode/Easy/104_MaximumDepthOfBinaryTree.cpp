/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int mx;
    void Search(TreeNode* node, int depth) {
        if ((node->left) != nullptr) Search(node->left, depth + 1);
        else mx = max(mx, depth);
        if ((node->right) != nullptr) Search(node->right, depth + 1);
        else mx = max(mx, depth);
    }
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        Search(root, 1);
        return mx;
    }
};