#include<iostream>
#include<queue>
using namespace std;

class node{

    public:

    int data;
    node* left;
    node *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data for left node of "<<data<<": ";
    root->left = buildTree(root->left);
    cout<<"enter the data for right node of "<<data<<": ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){

    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



void buildFromlevelorder(node* &root){

    queue<node*> q;
    cout<<"enter the data for root:"<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        cout<<"enter the left data for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter the right data for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){

    node* root = NULL;

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    cout<<endl<<"level order traversal is:"<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal:"<<endl;
    inorder(root);

    cout<<endl<<"preorder traversal:"<<endl;
    preorder(root);

    cout<<endl<<"postorder traversal:"<<endl;
    postorder(root);
}
