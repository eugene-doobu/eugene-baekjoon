/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
private:
	void serialize(TreeNode* root, string& str) {
		if (root == nullptr) {
			str += "n,";
		}
		else {
			str += (to_string(root->val) + ",");
			serialize(root->left, str);
			serialize(root->right, str);
		}
	}

	TreeNode* deserializeFunc(string& data) {
		int pivot = data.find(",");
		string currData = data.substr(0, pivot);
		data = data.substr(pivot + 1);
		if (currData == "n") return nullptr;
		TreeNode* node = new TreeNode(stoi(currData));
		node->left = deserializeFunc(data);
		node->right = deserializeFunc(data);
		return node;
	}

public:

	// Encodes a tree to a single string.
	string serialize(TreeNode* root) {
        string str = "";
        serialize(root, str);
		return str;
	}

	// Decodes your encoded data to tree.
	TreeNode* deserialize(string data) {
        cout << data;
		return deserializeFunc(data);
	}
};


// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));