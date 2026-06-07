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
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    
    unordered_map<int,TreeNode*> node;     // value -> node map
    unordered_map<int,int> indegree;       // track parent count

    for(auto &d : descriptions){
        int parent = d[0];
        int child = d[1];
        int isleft = d[2];

        if(!node.count(parent)){
           node[parent] = new TreeNode(parent); // create parent node
        }

        if(!node.count(child)){
            node[child] = new TreeNode(child);  // create child node
        }

        if(isleft){
            node[parent]->left = node[child];   // attach left child
        }
        else{
            node[parent]->right = node[child];  // attach right child
        }

        indegree[child]++;      // child has parent
        indegree[parent] += 0;  // ensure parent exists
    }

    // find root node
    for(auto &[val,deg] : indegree){
       if(deg == 0){
            return node[val];   // return root
       } 
    }

    return nullptr;             // safety return
    }
};