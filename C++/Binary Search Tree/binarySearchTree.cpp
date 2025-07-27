#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            { 
                q.push(temp->right);
            }
        }
    }
}

Node *insertIntoBST(Node *root, int d)
{

    if (root ==  NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node *minValue(Node *root)
{

    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValue(Node *root)
{

    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{

    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //---->left 1 child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        //---->right 1 child
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {

            int min = minValue(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }

    else if (root->data > val)
    {

        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void takeInput(Node *&root)
{

    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;

    cout << "Enter the data for creating BST:" << endl;
    takeInput(root);

    cout << "printing BST:" << endl;
    levelOrderTraversal(root);

    cout << endl;
    cout << "printing inorder:" << endl;
    inorder(root);

    cout << endl;
    cout << "printing preorder:" << endl;
    preorder(root);

    cout << endl;
    cout << "printing post:" << endl;
    postorder(root);

    cout << endl;
    cout << "minimum value is:" << minValue(root)->data << endl;

    cout << "maximum value is:" << maxValue(root)->data << endl;

    cout << "---------------deleting node----------------" << endl;
    root = deleteFromBST(root, 30);

    cout << "printing BST:" << endl;
    levelOrderTraversal(root);      
    cout << endl;
    cout << "printing inorder:" << endl;
    inorder(root);

    cout << endl;
    cout << "printing preorder:" << endl;
    preorder(root);

    cout << endl;
    cout << "printing post:" << endl;
    postorder(root);

    cout << endl;
    cout << "minimum value is:" << minValue(root)->data << endl;

    cout << "maximum value is:" << maxValue(root)->data << endl;
}
