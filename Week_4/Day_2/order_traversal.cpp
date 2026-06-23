#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


    vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>> a;

        if (root == NULL) {
            return a;
        }

        queue<TreeNode*> qu;
        qu.push(root);

        while (!qu.empty()) {
            int size = qu.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* frontNode = qu.front();
                qu.pop();

                level.push_back(frontNode->val);

                if (frontNode->left) {
                    qu.push(frontNode->left);
                }

                if (frontNode->right) {
                    qu.push(frontNode->right);
                }
            }

            a.push_back(level);
        }

        return a;
    
    }
