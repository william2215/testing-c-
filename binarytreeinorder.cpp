// C++ program to insert element in Binary Tree
#include <cstddef>
#include <iostream>
#include <queue>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
 
struct Node {
    int data;
    Node* left;
    Node* right;
};
 
/* Function to create a new node */
 
Node* CreateNode(int data)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 
/* Function to insert element in binary tree */
 
Node* InsertNode(Node* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }

	return root;
}
 
/* Inorder traversal of a binary tree */
 
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}


/* Post order  */

void postorder(Node* temp)
{
	if (temp == NULL) {
		return;
	}

	postorder(temp -> left);
	postorder(temp -> right);
	cout << temp -> data << ' ';
}

/* Pre order binary tree */

void preorder(Node* temp)
{

	if (temp == NULL) {
		return;
	}

	cout << temp->data << ' ';
	preorder(temp -> left);
	preorder(temp -> right);

}

int computarArbol(Node* temp, int depth, int max)
{
	if (temp -> left == NULL && temp -> right == NULL)
	{

		if (depth > max)
		{
			return depth;
		}else
		{
			return max;
		}
	}

	if (temp->left != NULL) {
		max = computarArbol(temp->left, depth + 1, max);
	}

	if (temp -> right != NULL) {
		max = computarArbol(temp->right, depth + 1, max);
	}

}

int maxDepht(Node* temp)
{

	if (temp == NULL) {
		return 0;
	}

	return computarArbol(temp, 1 , 0);

}

// Driver code
int main()
{
    
	Node* root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    //int key = 12;
    //root = InsertNode(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;

	cout << "Post order transversal ";
	postorder(root);
	cout << endl;

	cout << "Pre order transversal ";
	preorder(root);
	cout << endl;

	cout << "Tamanio del arbol "  << maxDepht(root) << endl;

    return 0;
}
